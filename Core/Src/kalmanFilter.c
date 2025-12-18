/*
 * kalmanFilter.c
 *
 *  Created on: Dec 18, 2025
 *      Author: ordum
 */


#include "kalmanFilter.h"
#include <string.h>

void kalmanInit(KalmanFilter* kf, float q, float r, float initial_value, float initial_error) {
    if (kf == NULL) return;

    kf->q = q;                      // Ковариация шума процесса
    kf->r = r;                      // Ковариация шума измерений
    kf->x = initial_value;          // Начальная оценка состояния
    kf->p = initial_error;          // Начальная ковариация ошибки
    kf->k = 0.0f;                   // Начальный коэффициент усиления
    kf->last_x = initial_value;     // Сохраняем начальное значение
}

float kalmanFilter(KalmanFilter* kf, float measurement) {
    if (kf == NULL) return measurement;

    // Этап предсказания
    // x = x (состояние не меняется в простой модели)
    kf->p = kf->p + kf->q;          // Увеличиваем неопределенность

    // Этап обновления
    kf->k = kf->p / (kf->p + kf->r); // Вычисляем коэффициент усиления Калмана
    kf->x = kf->x + kf->k * (measurement - kf->x); // Обновляем оценку
    kf->p = (1.0f - kf->k) * kf->p; // Обновляем ковариацию ошибки

    kf->last_x = kf->x;             // Сохраняем последнее значение
    return kf->x;
}

void kalmanFilterArray(KalmanFilter* kf, float* input, float* output, uint32_t size) {
    if (kf == NULL || input == NULL || output == NULL || size == 0) return;

    // Фильтруем каждый элемент массива
    for (uint32_t i = 0; i < size; i++) {
        output[i] = kalmanFilter(kf, input[i]);
    }
}

float kalmanGetLastLalue(KalmanFilter* kf) {
    if (kf == NULL) return 0.0f;
    return kf->last_x;
}
