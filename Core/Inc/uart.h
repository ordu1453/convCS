/*
 * uart.h
 *
 *  Created on: Dec 26, 2025
 *      Author: ordum
 */

#ifndef INC_UART_H_
#define INC_UART_H_

#include <stdio.h>

// Объявляем функции переадресации
int __io_putchar(int ch);
int __io_getchar(void);


#endif /* INC_UART_H_ */
