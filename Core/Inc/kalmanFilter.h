/*
 * kalmanFilter.h
 *
 *  Created on: Dec 18, 2025
 *      Author: ordum
 */

#ifndef INC_KALMANFILTER_H_
#define INC_KALMANFILTER_H_

#include <stdint.h>

// Структура фильтра Калмана для одномерного сигнала
typedef struct {
    float q;        // Ковариация шума процесса
    float r;        // Ковариация шума измерений
    float x;        // Оценка состояния
    float p;        // Ковариация ошибки оценки
    float k;        // Коэффициент усиления Калмана
    float last_x;   // Последняя оценка (для отладки)
} KalmanFilter;

// Инициализация фильтра Калмана
void kalmanInit(KalmanFilter* kf, float q, float r, float initial_value, float initial_error);

// Фильтрация одного значения
float kalmanFilter(KalmanFilter* kf, float measurement);

// Фильтрация массива значений
void kalmanFilterArray(KalmanFilter* kf, float* input, float* output, uint32_t size);

// Получение последней отфильтрованной величины
float kalmanGetLastValue(KalmanFilter* kf);


#endif /* INC_KALMANFILTER_H_ */
