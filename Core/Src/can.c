#include "main.h"
#include "can.h"
#include <string.h>

uint8_t can_init = 0;

float targetVoltage = 0.0f;
SystemState_t requestedMode = STATE_IDLE;


static uint32_t canMsCounter = 0;
static uint8_t sendOnCan1 = 1;


extern FDCAN_HandleTypeDef hfdcan1;
extern FDCAN_HandleTypeDef hfdcan2;

void canInit(void)
{

    // 3. Затем активируем CAN2
    if (HAL_FDCAN_Start(&hfdcan2) != HAL_OK)
    {
        Error_Handler();
    }
    // 1. Сначала активируем CAN1
    if (HAL_FDCAN_Start(&hfdcan1) != HAL_OK)
    {
        Error_Handler();
    }

    // 2. Задержка перед запуском CAN2
    HAL_Delay(10);



    // 4. Настройка фильтров для обоих CAN
    HAL_FDCAN_ConfigGlobalFilter(&hfdcan1, FDCAN_ACCEPT_IN_RX_FIFO0,
                                 FDCAN_ACCEPT_IN_RX_FIFO0,
                                 FDCAN_FILTER_REMOTE,
                                 FDCAN_FILTER_REMOTE);

    HAL_FDCAN_ConfigGlobalFilter(&hfdcan2, FDCAN_ACCEPT_IN_RX_FIFO0,
                                 FDCAN_ACCEPT_IN_RX_FIFO0,
                                 FDCAN_FILTER_REMOTE,
                                 FDCAN_FILTER_REMOTE);

    // 5. Активация прерываний
    HAL_FDCAN_ActivateNotification(&hfdcan1, FDCAN_IT_RX_FIFO0_NEW_MESSAGE, 0);
    HAL_FDCAN_ActivateNotification(&hfdcan2, FDCAN_IT_RX_FIFO0_NEW_MESSAGE, 0);

    can_init = 1;
}


//void canProcessPeriodic(uint32_t msTick)
//{
//canMsCounter += msTick;
//static uint32_t lastToggle = 0;
//
//
//if (canMsCounter - lastToggle >= CAN_TOGGLE_MS)
//{
//sendOnCan1 = !sendOnCan1;
//lastToggle = canMsCounter;
//}
//}


void canProcessPeriodic()
{
	sendOnCan1 = !sendOnCan1;
}

void canHeartbeat(void)
{
	uint8_t data[1];

	data[0] = (uint8_t)0;

	FDCAN_TxHeaderTypeDef txHeader;
	txHeader.Identifier = 0x120;
	txHeader.IdType = FDCAN_STANDARD_ID;
	txHeader.TxFrameType = FDCAN_DATA_FRAME;
	txHeader.DataLength = FDCAN_DLC_BYTES_1;
	txHeader.ErrorStateIndicator = FDCAN_ESI_ACTIVE;
	txHeader.BitRateSwitch = FDCAN_BRS_OFF;
	txHeader.FDFormat = FDCAN_CLASSIC_CAN;
	txHeader.TxEventFifoControl = FDCAN_NO_TX_EVENTS;


	// Используем разные ID для CAN1 и CAN2
	if (sendOnCan1)
	{
	    HAL_FDCAN_AddMessageToTxFifoQ(&hfdcan1, &txHeader, data);

	    // Проверяем статус отправки
	    if (HAL_FDCAN_GetTxFifoFreeLevel(&hfdcan1) == 3)
	    {
	        // Ошибка - сообщение не добавлено в FIFO
	    }
	}
	else
	{
	    HAL_FDCAN_AddMessageToTxFifoQ(&hfdcan2, &txHeader, data);

	    // Проверяем статус отправки
	    if (HAL_FDCAN_GetTxFifoFreeLevel(&hfdcan2) == 3)
	    {
	        // Ошибка - сообщение не добавлено в FIFO
	    }
	}
}


void canPublishTelemetry(SystemState_t state, uint32_t errorMask, const SensorValues_t* s)
{
	if (can_init == 0)
	{
//		canInit();
	}
uint8_t data[8];


data[0] = (uint8_t)state;
data[1] = (uint8_t)(errorMask & 0xFF);


int16_t vin = (int16_t)(s->voltageIn);
int16_t vout = (int16_t)(s->voltageOut);
int16_t iL = (int16_t)(s->currentChoke);


memcpy(&data[2], &vin, 2);
memcpy(&data[4], &vout, 2);
memcpy(&data[6], &iL, 2);


FDCAN_TxHeaderTypeDef txHeader;
txHeader.Identifier = 0x123;
txHeader.IdType = FDCAN_STANDARD_ID;
txHeader.TxFrameType = FDCAN_DATA_FRAME;
txHeader.DataLength = FDCAN_DLC_BYTES_8;
txHeader.ErrorStateIndicator = FDCAN_ESI_ACTIVE;
txHeader.BitRateSwitch = FDCAN_BRS_OFF;
txHeader.FDFormat = FDCAN_CLASSIC_CAN;
txHeader.TxEventFifoControl = FDCAN_NO_TX_EVENTS;

// Используем разные ID для CAN1 и CAN2
if (sendOnCan1)
{
    txHeader.Identifier = 0x123; // ID для CAN1
    HAL_FDCAN_AddMessageToTxFifoQ(&hfdcan1, &txHeader, data);

    // Проверяем статус отправки
    if (HAL_FDCAN_GetTxFifoFreeLevel(&hfdcan1) == 3)
    {
        // Ошибка - сообщение не добавлено в FIFO
    }
}
else
{
    txHeader.Identifier = 0x123; // Другой ID для CAN2
    HAL_FDCAN_AddMessageToTxFifoQ(&hfdcan2, &txHeader, data);

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

if (rxHeader.Identifier == 0x666)
{

	HAL_GPIO_TogglePin(LED1_GPIO_Port, LED1_Pin);



	requestedMode = (SystemState_t)data[0];


	int16_t vDeci = 0;
	memcpy(&vDeci, &data[1], 2);
	targetVoltage = (float)vDeci;
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


