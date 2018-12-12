################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/commands/Command.cpp 

OBJS += \
./src/commands/Command.o 

CPP_DEPS += \
./src/commands/Command.d 


# Each subdirectory must supply rules for building sources it contributes
src/commands/%.o: ../src/commands/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: ARM v7 g++ compiler'
	arm-none-eabi-g++ -Wall -O0 -g3 -I"C:\Users\black\Downloads\lab1\lab1.sdk\PSOS\src\os" -c -fmessage-length=0 -MT"$@" -mcpu=cortex-a9 -mfpu=vfpv3 -mfloat-abi=hard -I../../freertos901_xilinx_bsp/ps7_cortexa9_0/include -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


