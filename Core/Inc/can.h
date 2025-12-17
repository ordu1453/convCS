/*
 * can.h
 *
 *  Created on: Oct 16, 2025
 *      Author: ordum
 */

#ifndef INC_CAN_H_
#define INC_CAN_H_

#include "main.h"
#include "types.h"
#include <stdint.h>
#include "config.h"


// Инициализация обеих шин FDCAN (FDCAN1 и FDCAN2)
void canInit(void);


// Функция вызывается периодически каждые CONTROL_DT_MS миллисекунд.
// Она отслеживает время и чередует отправку сообщений между FDCAN1 и FDCAN2 каждые 250 мс.
void canProcessPeriodic();


// Отправка телеметрии (режим работы, ошибки, измерения датчиков)
void canPublishTelemetry(SystemState_t state, uint32_t errorMask, const SensorValues_t* s);


// Приём сообщений от управляющего блока.
// Обновляет глобальные переменные с целевым напряжением и режимом работы.
void canReceiveHandler(FDCAN_HandleTypeDef *hfdcan);

void canCheckStatus(void);

void canHeartbeat(void);


// Глобальные данные, обновляемые по CAN.
extern float targetVoltage;
extern SystemState_t requestedMode;

#endif /* INC_CAN_H_ */
