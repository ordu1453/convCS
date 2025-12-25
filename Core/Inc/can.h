/**
 * @file can.h
 * @brief Заголовочный файл модуля работы с CAN-шиной (FDCAN)
 *
 * Этот файл содержит объявления функций и глобальных переменных
 * для работы с двумя CAN-шинами (FDCAN1 и FDCAN2).
 *
 * @author ordum
 * @date Oct 16, 2025
 */

#ifndef INC_CAN_H_
#define INC_CAN_H_

#include "main.h"
#include "types.h"
#include <stdint.h>
#include "config.h"

/**
 * @brief Инициализация обеих шин FDCAN (FDCAN1 и FDCAN2)
 *
 * Функция выполняет полную инициализацию CAN-модулей, включая:
 * - Запуск контроллеров FDCAN1 и FDCAN2
 * - Настройку глобальных фильтров
 * - Активацию прерываний
 * - Установку флага инициализации
 */
void canInit(void);

/**
 * @brief Периодическая обработка CAN
 *
 * Функция вызывается периодически каждые CONTROL_DT_MS миллисекунд.
 * Она отслеживает время и чередует отправку сообщений между FDCAN1 и FDCAN2.
 *
 * @note Периодичность вызова определяется конфигурацией системы
 */
void canProcessPeriodic(void);

/**
 * @brief Отправка телеметрии по CAN
 *
 * Отправляет телеметрийные данные системы, включая:
 * - Режим работы системы
 * - Маску ошибок
 * - Показания датчиков (напряжения, ток)
 *
 * @param state Текущее состояние системы
 * @param errorMask Маска активных ошибок системы
 * @param s Указатель на структуру сенсорных значений
 *
 * @note Сообщение отправляется с ID 0x123
 */
void canPublishTelemetry(SystemState_t state, uint32_t errorMask, const SensorValues_t* s);

/**
 * @brief Обработчик принятых CAN-сообщений
 *
 * Приём сообщений от управляющего блока.
 * Обновляет глобальные переменные с целевым напряжением и режимом работы.
 *
 * @param hfdcan Указатель на дескриптор FDCAN, от которого получено сообщение
 *
 * @note Обрабатываются сообщения с ID 0x666
 */
void canReceiveHandler(FDCAN_HandleTypeDef *hfdcan);

/**
 * @brief Проверка статуса CAN-шин
 *
 * Проверяет состояние обеих CAN-шин на наличие ошибок Bus-Off.
 * При обнаружении ошибки выполняет процедуру восстановления.
 *
 * @note Рекомендуется вызывать эту функцию периодически для мониторинга
 */
void canCheckStatus(void);

/**
 * @brief Отправка heartbeat-сообщения
 *
 * Отправляет heartbeat-сообщение для индикации активности устройства.
 * Сообщение отправляется по очереди на CAN1 или CAN2.
 *
 * @note Heartbeat отправляется с ID 0x120
 */
void canHeartbeat(void);

SystemState_t getRequestedMode(void);


/** @brief Целевое напряжение, полученное по CAN (в вольтах) */
extern float targetVoltage;

/** @brief Запрошенный режим работы системы, полученный по CAN */
extern SystemState_t requestedMode;

#endif /* INC_CAN_H_ */
