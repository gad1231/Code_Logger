################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/AppLogger.cpp \
../src/Logger.cpp 

CPP_DEPS += \
./src/AppLogger.d \
./src/Logger.d 

OBJS += \
./src/AppLogger.o \
./src/Logger.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/home/ahmed/MyWorkSpace/Code_Logger/inc" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/AppLogger.d ./src/AppLogger.o ./src/Logger.d ./src/Logger.o

.PHONY: clean-src

