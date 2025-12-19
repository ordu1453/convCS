/**
 * @file kalmanFilter.h
 * @brief Заголовочный файл модуля фильтра Калмана
 *
 * Этот файл содержит объявления структур и функций для работы
 * с одномерным дискретным фильтром Калмана.
 *
 * @author ordum
 * @date Dec 18, 2025
 */

#ifndef INC_KALMANFILTER_H_
#define INC_KALMANFILTER_H_

#include <stdint.h>

/**
 * @brief Структура фильтра Калмана для одномерного сигнала
 *
 * Структура содержит все параметры и состояние одномерного
 * фильтра Калмана для модели постоянного состояния.
 */
typedef struct {
    float q;        /**< Ковариация шума процесса (чем больше, тем быстрее реакция) */
    float r;        /**< Ковариация шума измерений (чем больше, тем больше сглаживание) */
    float x;        /**< Текущая оценка состояния (отфильтрованное значение) */
    float p;        /**< Текущая ковариация ошибки оценки (мера неопределенности) */
    float k;        /**< Коэффициент усиления Калмана (вес нового измерения) */
    float last_x;   /**< Последняя оценка (для отладки и быстрого доступа) */
} KalmanFilter;

/**
 * @brief Инициализация фильтра Калмана
 *
 * @param kf Указатель на структуру фильтра Калмана
 * @param q Ковариация шума процесса
 * @param r Ковариация шума измерений
 * @param initial_value Начальное значение оценки
 * @param initial_error Начальная ковариация ошибки
 */
void kalmanInit(KalmanFilter* kf, float q, float r, float initial_value, float initial_error);

/**
 * @brief Фильтрация одного измерения
 *
 * @param kf Указатель на структуру фильтра Калмана
 * @param measurement Новое измерение для фильтрации
 * @return Отфильтрованное значение
 */
float kalmanFilter(KalmanFilter* kf, float measurement);

/**
 * @brief Фильтрация массива значений
 *
 * @param kf Указатель на структуру фильтра Калмана
 * @param input Указатель на входной массив измерений
 * @param output Указатель на выходной массив для результатов
 * @param size Количество элементов в массивах
 */
void kalmanFilterArray(KalmanFilter* kf, float* input, float* output, uint32_t size);

/**
 * @brief Получение последней отфильтрованной величины
 *
 * @param kf Указатель на структуру фильтра Калмана
 * @return Последнее отфильтрованное значение
 */
float kalmanGetLastValue(KalmanFilter* kf);

#endif /* INC_KALMANFILTER_H_ */
