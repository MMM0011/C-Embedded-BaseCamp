#ifndef _PCA9685_H_
#define _PCA9685_H_

#include "stm32f4xx_hal.h"

void sleep_mode_on( I2C_HandleTypeDef *hi2c1, uint16_t devId );
void sleep_mode_off( I2C_HandleTypeDef *hi2c1, uint16_t devId );
void enable_outputs( I2C_HandleTypeDef *hi2c1, uint16_t devId );
void disable_outputs( I2C_HandleTypeDef *hi2c1, uint16_t devId );
void set_PWM_frequency( I2C_HandleTypeDef *hi2c1, uint16_t devId, uint8_t frequency );

#endif
