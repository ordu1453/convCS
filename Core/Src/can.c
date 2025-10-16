#include "main.h"
#include "can.h"
#include <string.h>


float targetVoltage = 0.0f;
SystemState_t requestedMode = STATE_IDLE;


static uint32_t canMsCounter = 0;
static uint8_t sendOnCan1 = 1;


extern FDCAN_HandleTypeDef hfdcan1;
extern FDCAN_HandleTypeDef hfdcan2;

void canInit(void)
{
HAL_FDCAN_Start(&hfdcan1);
HAL_FDCAN_Start(&hfdcan2);


HAL_FDCAN_ActivateNotification(&hfdcan1, FDCAN_IT_RX_FIFO0_NEW_MESSAGE, 0);
HAL_FDCAN_ActivateNotification(&hfdcan2, FDCAN_IT_RX_FIFO0_NEW_MESSAGE, 0);
}


void canProcessPeriodic(uint32_t msTick)
{
canMsCounter += msTick;
static uint32_t lastToggle = 0;


if (canMsCounter - lastToggle >= CAN_TOGGLE_MS)
{
sendOnCan1 = !sendOnCan1;
lastToggle = canMsCounter;
}
}


void canPublishTelemetry(SystemState_t state, uint32_t errorMask, const SensorValues_t* s)
{
uint8_t data[8];


data[0] = (uint8_t)state;
data[1] = (uint8_t)(errorMask & 0xFF);


int16_t vin = (int16_t)(s->voltageIn_mV / 100);
int16_t vout = (int16_t)(s->voltageOut_mV / 100);
int16_t iL = (int16_t)(s->currentChoke_mA / 100);


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


uint32_t mailbox;


if (sendOnCan1)
HAL_FDCAN_AddMessageToTxFifoQ(&hfdcan1, &txHeader, data);
else
HAL_FDCAN_AddMessageToTxFifoQ(&hfdcan2, &txHeader, data);
}


void canReceiveHandler(FDCAN_HandleTypeDef *hfdcan)
{
FDCAN_RxHeaderTypeDef rxHeader;
uint8_t data[8];


if (HAL_FDCAN_GetRxMessage(hfdcan, FDCAN_RX_FIFO0, &rxHeader, data) != HAL_OK)
return;


requestedMode = (SystemState_t)data[0];


int16_t vDeci = 0;
memcpy(&vDeci, &data[1], 2);
targetVoltage = (float)vDeci * 100.0f;
}


void HAL_FDCAN_RxFifo0Callback(FDCAN_HandleTypeDef *hfdcan, uint32_t RxFifo0ITs)
{
canReceiveHandler(hfdcan);
}
