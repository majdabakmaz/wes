/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    gpio.c
  * @brief   This file provides code for the configuration
  *          of all used GPIO pins.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Includes ------------------------------------------------------------------*/
#include "gpio.h"

/* USER CODE BEGIN 0 */

void gpio_led_state(uint8_t LED_ID , uint8_t state){

GPIO_PinState pinState;

pinState = ( state == 1) ? GPIO_PIN_SET : GPIO_PIN_RESET;
switch(LED_ID){
	 case LED3_ORANGE_ID:
	 HAL_GPIO_WritePin(GPIOD , LED3_ORANGE_PinNumber , pinState);
	 break;
	 case LED4_GREEN_ID:
	 HAL_GPIO_WritePin(GPIOD , LED4_GREEN_PinNumber , pinState);
	 break;
	 case LED5_RED_ID:
	 HAL_GPIO_WritePin(GPIOD , LED5_RED_PinNumber , pinState);
	 break;
	 case LED6_BLUE_ID:
	 HAL_GPIO_WritePin(GPIOD , LED6_BLUE_PinNumber , pinState);
	 break;
 }
}

/* USER CODE END 0 */

/*----------------------------------------------------------------------------*/
/* Configure GPIO                                                             */
/*----------------------------------------------------------------------------*/
/* USER CODE BEGIN 1 */

/* USER CODE END 1 */

/** Pinout Configuration
*/
void MX_GPIO_Init(void)
{

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();

}

/* USER CODE BEGIN 2 */

/* USER CODE END 2 */
