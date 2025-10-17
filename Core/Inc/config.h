/*
 * config.h
 *
 *  Created on: Oct 16, 2025
 *      Author: ordum
 */

#ifndef INC_CONFIG_H_
#define INC_CONFIG_H_



// General
#define CONTROL_DT_MS 1U // control loop dt in milliseconds
#define CAN_TOGGLE_MS 250U


// ADC
#define ADC_CHANNEL_COUNT 5


// ADC to physical conversion
// ADC reference, gain, shunt value, divider etc. Настройте под вашу схему
#define ADC_RESOLUTION 4095.0f
#define VREF_VOLTS 3.3f


// Voltage dividers (example): Vbus measured via divider Rtop/Rbot
#define VOLTAGE_DIVIDER_RATIO 11.0f // e.g. 10k/1k => 11
// Current sensors: assume bidirectional output centered at Vref/2
#define CURRENT_SHUNT_GAIN 0.100f // V/A (example)
#define CURRENT_SENSOR_OFFSET_VOLTS (VREF_VOLTS/2.0f)


// Limits for diagnostics (physical units)
#define VBUS_MIN 0.0f
#define VBUS_MAX 800.0f
#define VIN_MIN 0.0f
#define VIN_MAX 800.0f


#define I_MAX 2500.0f // +/-2500 A range provided by user - set realistically


// PWM
#define PWM_MIN_DUTY 0U
#define PWM_MAX_DUTY(arr) (arr)


// CAN
#define CAN_SEND_PERIOD_MS CAN_TOGGLE_MS


// System states
typedef enum {
STATE_IDLE = 0,
STATE_PRECHARGE = 1,
STATE_INIT = 2,
STATE_CHARGE = 3,
STATE_DISCHARGE = 4
} SystemState_t;

typedef enum {
	STATE_DISABLE = 0,
	STATE_ENABLE = 1
} PWMState_t;


// Error bitmask
#define ERR_NONE 0x00
#define ERR_OVERVOLTAGE 0x01
#define ERR_UNDERVOLTAGE 0x02
#define ERR_OVERCURRENT 0x04
#define ERR_IGBT_DRIVER 0x08


// Коэффициенты преобразования ADC -> физические величины
#define ADC_TO_CURRENT_COEFF_IN    0.1f    // мА/единицу ADC, подставь своё значение
#define ADC_TO_CURRENT_COEFF_OUT   0.1f
#define ADC_TO_CURRENT_COEFF_CHOKE 0.1f
#define ADC_TO_VOLTAGE_COEFF_IN    1.0f    // мВ/единицу ADC, подставь своё значение
#define ADC_TO_VOLTAGE_COEFF_OUT   1.0f

#endif /* INC_CONFIG_H_ */
