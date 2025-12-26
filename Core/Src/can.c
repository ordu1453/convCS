#include "main.h"
#include "can.h"
#include <string.h>

uint8_t can_init = 0;
float targetVoltage = 0.0f;
SystemState_t requestedMode = STATE_INIT;
static uint8_t sendOnCan1 = 1;

extern FDCAN_HandleTypeDef hfdcan1;
extern FDCAN_HandleTypeDef hfdcan2;

void canInit(void)
{

    if (HAL_FDCAN_Start(&hfdcan2) != HAL_OK)
    {
        Error_Handler();
    }
    if (HAL_FDCAN_Start(&hfdcan1) != HAL_OK)
    {
        Error_Handler();
    }

    HAL_Delay(10);

    HAL_FDCAN_ConfigGlobalFilter(&hfdcan1, FDCAN_ACCEPT_IN_RX_FIFO0,
                                 FDCAN_ACCEPT_IN_RX_FIFO0,
                                 FDCAN_FILTER_REMOTE,
                                 FDCAN_FILTER_REMOTE);

    HAL_FDCAN_ConfigGlobalFilter(&hfdcan2, FDCAN_ACCEPT_IN_RX_FIFO0,
                                 FDCAN_ACCEPT_IN_RX_FIFO0,
                                 FDCAN_FILTER_REMOTE,
                                 FDCAN_FILTER_REMOTE);

    HAL_FDCAN_ActivateNotification(&hfdcan1, FDCAN_IT_RX_FIFO0_NEW_MESSAGE, 0);
    HAL_FDCAN_ActivateNotification(&hfdcan2, FDCAN_IT_RX_FIFO0_NEW_MESSAGE, 0);

    can_init = 1;
}

void canProcessPeriodic()
{
	sendOnCan1 = !sendOnCan1;
}

void canPublishTelemetry(SystemState_t state, uint32_t errorMask, const SensorValues_t* s)
{
	if (can_init == 0)
	{
//		canInit();
	}
uint8_t data_state[2];
uint8_t data_tele[8];

data_state[0] = (uint8_t)state;
data_state[1] = (uint8_t)(errorMask & 0xFF);

int16_t vout = (int16_t)(s->voltageOut);
int16_t vin = (int16_t)(s->voltageIn);
int16_t iout = (int16_t)(s->currentOut);
int16_t iin = (int16_t)(s->currentIn);

memcpy(&data_tele[0], &vout, 2);
memcpy(&data_tele[2], &vin, 2);
memcpy(&data_tele[4], &iout, 2);
memcpy(&data_tele[6], &iin, 2);

FDCAN_TxHeaderTypeDef txHeader_state;
txHeader_state.Identifier = 0x198;
txHeader_state.IdType = FDCAN_STANDARD_ID;
txHeader_state.TxFrameType = FDCAN_DATA_FRAME;
txHeader_state.DataLength = FDCAN_DLC_BYTES_2;
txHeader_state.ErrorStateIndicator = FDCAN_ESI_ACTIVE;
txHeader_state.BitRateSwitch = FDCAN_BRS_OFF;
txHeader_state.FDFormat = FDCAN_CLASSIC_CAN;
txHeader_state.TxEventFifoControl = FDCAN_NO_TX_EVENTS;

FDCAN_TxHeaderTypeDef txHeader_tele;
txHeader_tele.Identifier = 0x298;
txHeader_tele.IdType = FDCAN_STANDARD_ID;
txHeader_tele.TxFrameType = FDCAN_DATA_FRAME;
txHeader_tele.DataLength = FDCAN_DLC_BYTES_8;
txHeader_tele.ErrorStateIndicator = FDCAN_ESI_ACTIVE;
txHeader_tele.BitRateSwitch = FDCAN_BRS_OFF;
txHeader_tele.FDFormat = FDCAN_CLASSIC_CAN;
txHeader_tele.TxEventFifoControl = FDCAN_NO_TX_EVENTS;

// Используем разные ID для CAN1 и CAN2
if (sendOnCan1)
{
    HAL_FDCAN_AddMessageToTxFifoQ(&hfdcan1, &txHeader_state, data_state);
    HAL_FDCAN_AddMessageToTxFifoQ(&hfdcan1, &txHeader_tele, data_tele);

    // Проверяем статус отправки
    if (HAL_FDCAN_GetTxFifoFreeLevel(&hfdcan1) == 3)
    {
        // Ошибка - сообщение не добавлено в FIFO
    }
}
else
{
    HAL_FDCAN_AddMessageToTxFifoQ(&hfdcan2, &txHeader_state, data_state);
    HAL_FDCAN_AddMessageToTxFifoQ(&hfdcan2, &txHeader_tele, data_tele);

    // Проверяем статус отправки
    if (HAL_FDCAN_GetTxFifoFreeLevel(&hfdcan2) == 3)
    {
        // Ошибка - сообщение не добавлено в FIFO
    }
}
}

void canReceiveHandler(FDCAN_HandleTypeDef *hfdcan)
{
FDCAN_RxHeaderTypeDef rxHeader;
uint8_t data[8];

if (HAL_FDCAN_GetRxMessage(hfdcan, FDCAN_RX_FIFO0, &rxHeader, data) != HAL_OK)
return;

if (rxHeader.Identifier == 0x218)
{

	HAL_GPIO_TogglePin(LED1_GPIO_Port, LED1_Pin);



	requestedMode = (SystemState_t)data[0];


	int16_t vDeci = 0;
	memcpy(&vDeci, &data[1], 2);
	targetVoltage = (float)vDeci*10;
}
else
{
	return;
}

}


void HAL_FDCAN_RxFifo0Callback(FDCAN_HandleTypeDef *hfdcan, uint32_t RxFifo0ITs)
{
canReceiveHandler(hfdcan);
}



void canRecoverFromBusOff(FDCAN_HandleTypeDef *hfdcan)
{
    // 1. Останавливаем CAN
    HAL_FDCAN_Stop(hfdcan);

    // 2. Задержка
    HAL_Delay(100);

//    // 3. Сбрасываем (реинициализируем)
//    // Простой способ - вызвать MX_FDCANx_Init() снова
//    if (hfdcan->Instance == FDCAN1)
//    {
//        MX_FDCAN1_Init();
//    }
//    else if (hfdcan->Instance == FDCAN2)
//    {
//        MX_FDCAN2_Init();
//    }

    // 4. Запускаем заново
    HAL_FDCAN_Start(hfdcan);

    // 5. Настраиваем фильтры
    HAL_FDCAN_ConfigGlobalFilter(hfdcan,
        FDCAN_ACCEPT_IN_RX_FIFO0,
        FDCAN_ACCEPT_IN_RX_FIFO0,
        FDCAN_REJECT_REMOTE,
        FDCAN_REJECT_REMOTE);

    // 6. Включаем прерывания
    HAL_FDCAN_ActivateNotification(hfdcan,
        FDCAN_IT_RX_FIFO0_NEW_MESSAGE |
        FDCAN_IT_BUS_OFF |
        FDCAN_IT_ERROR_WARNING,
        0);
}


void canCheckStatus(void)
{
    FDCAN_ProtocolStatusTypeDef status1, status2;

    HAL_FDCAN_GetProtocolStatus(&hfdcan1, &status1);
    HAL_FDCAN_GetProtocolStatus(&hfdcan2, &status2);

    char buf[100];

    if (status1.BusOff)
    {
        canRecoverFromBusOff(&hfdcan1);
        // Мигаем LED1 для CAN1
        HAL_GPIO_TogglePin(LED1_GPIO_Port, LED1_Pin);
    }

    if (status2.BusOff)
    {
        canRecoverFromBusOff(&hfdcan2);        // Мигаем LED2 для CAN2
        HAL_GPIO_TogglePin(LED1_GPIO_Port, LED1_Pin);
    }
}

SystemState_t getRequestedMode()
{
	return requestedMode;
}


