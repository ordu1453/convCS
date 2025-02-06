################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/Simulink/ChargeDuty.c \
../Drivers/Simulink/DischargeDuty.c \
../Drivers/Simulink/errorHandler.c 

OBJS += \
./Drivers/Simulink/ChargeDuty.o \
./Drivers/Simulink/DischargeDuty.o \
./Drivers/Simulink/errorHandler.o 

C_DEPS += \
./Drivers/Simulink/ChargeDuty.d \
./Drivers/Simulink/DischargeDuty.d \
./Drivers/Simulink/errorHandler.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/Simulink/%.o Drivers/Simulink/%.su Drivers/Simulink/%.cyclo: ../Drivers/Simulink/%.c Drivers/Simulink/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F767xx -c -I../Core/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/aordu/Desktop/ТМХ/Преобразователь/CSS/Drivers/Simulink" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-Simulink

clean-Drivers-2f-Simulink:
	-$(RM) ./Drivers/Simulink/ChargeDuty.cyclo ./Drivers/Simulink/ChargeDuty.d ./Drivers/Simulink/ChargeDuty.o ./Drivers/Simulink/ChargeDuty.su ./Drivers/Simulink/DischargeDuty.cyclo ./Drivers/Simulink/DischargeDuty.d ./Drivers/Simulink/DischargeDuty.o ./Drivers/Simulink/DischargeDuty.su ./Drivers/Simulink/errorHandler.cyclo ./Drivers/Simulink/errorHandler.d ./Drivers/Simulink/errorHandler.o ./Drivers/Simulink/errorHandler.su

.PHONY: clean-Drivers-2f-Simulink

