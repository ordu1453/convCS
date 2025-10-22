################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/can.c \
../Core/Src/converter.c \
../Core/Src/diag.c \
../Core/Src/main.c \
../Core/Src/pid.c \
../Core/Src/precharge.c \
../Core/Src/pwm.c \
../Core/Src/pwmHandler.c \
../Core/Src/sensor.c \
../Core/Src/stm32g4xx_hal_msp.c \
../Core/Src/stm32g4xx_it.c \
../Core/Src/syscalls.c \
../Core/Src/sysmem.c \
../Core/Src/system_stm32g4xx.c 

OBJS += \
./Core/Src/can.o \
./Core/Src/converter.o \
./Core/Src/diag.o \
./Core/Src/main.o \
./Core/Src/pid.o \
./Core/Src/precharge.o \
./Core/Src/pwm.o \
./Core/Src/pwmHandler.o \
./Core/Src/sensor.o \
./Core/Src/stm32g4xx_hal_msp.o \
./Core/Src/stm32g4xx_it.o \
./Core/Src/syscalls.o \
./Core/Src/sysmem.o \
./Core/Src/system_stm32g4xx.o 

C_DEPS += \
./Core/Src/can.d \
./Core/Src/converter.d \
./Core/Src/diag.d \
./Core/Src/main.d \
./Core/Src/pid.d \
./Core/Src/precharge.d \
./Core/Src/pwm.d \
./Core/Src/pwmHandler.d \
./Core/Src/sensor.d \
./Core/Src/stm32g4xx_hal_msp.d \
./Core/Src/stm32g4xx_it.d \
./Core/Src/syscalls.d \
./Core/Src/sysmem.d \
./Core/Src/system_stm32g4xx.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/%.o Core/Src/%.su Core/Src/%.cyclo: ../Core/Src/%.c Core/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DTEST_UNITY -DUSE_HAL_DRIVER -DSTM32G473xx -c -I../Core/Inc -I../Drivers/STM32G4xx_HAL_Driver/Inc -I../Drivers/STM32G4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32G4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-Src

clean-Core-2f-Src:
	-$(RM) ./Core/Src/can.cyclo ./Core/Src/can.d ./Core/Src/can.o ./Core/Src/can.su ./Core/Src/converter.cyclo ./Core/Src/converter.d ./Core/Src/converter.o ./Core/Src/converter.su ./Core/Src/diag.cyclo ./Core/Src/diag.d ./Core/Src/diag.o ./Core/Src/diag.su ./Core/Src/main.cyclo ./Core/Src/main.d ./Core/Src/main.o ./Core/Src/main.su ./Core/Src/pid.cyclo ./Core/Src/pid.d ./Core/Src/pid.o ./Core/Src/pid.su ./Core/Src/precharge.cyclo ./Core/Src/precharge.d ./Core/Src/precharge.o ./Core/Src/precharge.su ./Core/Src/pwm.cyclo ./Core/Src/pwm.d ./Core/Src/pwm.o ./Core/Src/pwm.su ./Core/Src/pwmHandler.cyclo ./Core/Src/pwmHandler.d ./Core/Src/pwmHandler.o ./Core/Src/pwmHandler.su ./Core/Src/sensor.cyclo ./Core/Src/sensor.d ./Core/Src/sensor.o ./Core/Src/sensor.su ./Core/Src/stm32g4xx_hal_msp.cyclo ./Core/Src/stm32g4xx_hal_msp.d ./Core/Src/stm32g4xx_hal_msp.o ./Core/Src/stm32g4xx_hal_msp.su ./Core/Src/stm32g4xx_it.cyclo ./Core/Src/stm32g4xx_it.d ./Core/Src/stm32g4xx_it.o ./Core/Src/stm32g4xx_it.su ./Core/Src/syscalls.cyclo ./Core/Src/syscalls.d ./Core/Src/syscalls.o ./Core/Src/syscalls.su ./Core/Src/sysmem.cyclo ./Core/Src/sysmem.d ./Core/Src/sysmem.o ./Core/Src/sysmem.su ./Core/Src/system_stm32g4xx.cyclo ./Core/Src/system_stm32g4xx.d ./Core/Src/system_stm32g4xx.o ./Core/Src/system_stm32g4xx.su

.PHONY: clean-Core-2f-Src

