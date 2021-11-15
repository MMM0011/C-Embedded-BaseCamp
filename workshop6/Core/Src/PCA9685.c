#include "PCA9685.h"
#include "main.h"


void sleep_mode_on( I2C_HandleTypeDef *hi2c1, uint16_t devId )
{
	uint8_t TxBuffer [ 2 ] = { 0x00, 0x11 };

	HAL_I2C_Master_Transmit( hi2c1, devId, (uint8_t *) &TxBuffer, 2, 1000 );
}

void sleep_mode_off( I2C_HandleTypeDef *hi2c1, uint16_t devId )
{
	uint8_t TxBuffer [ 2 ] = { 0x00, 0x01 };

	HAL_I2C_Master_Transmit( hi2c1, devId, (uint8_t *) &TxBuffer, 2, 1000 );
}

void enable_outputs( I2C_HandleTypeDef *hi2c1, uint16_t devId )
{
	uint8_t TxBuffer [ 2 ] = { 0x00, 0x01 };

	HAL_I2C_Master_Transmit( hi2c1, devId, (uint8_t *) &TxBuffer, 2, 1000 );
}

void disable_outputs( I2C_HandleTypeDef *hi2c1, uint16_t devId )
{
	uint8_t TxBuffer [ 2 ] = { 0x00, 0x00 };

	HAL_I2C_Master_Transmit( hi2c1, devId, (uint8_t *) &TxBuffer, 2, 1000 );
}

void set_PWM_frequency( I2C_HandleTypeDef *hi2c1, uint16_t devId, uint8_t frequency )
{
	uint8_t TxBuffer [ 2 ] = { 0xFE, frequency };

	HAL_I2C_Master_Transmit( hi2c1, devId, (uint8_t *) &TxBuffer, 2, 1000 );
}




