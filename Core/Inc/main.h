/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32h7xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define FRAME_RATE_Pin GPIO_PIN_6
#define FRAME_RATE_GPIO_Port GPIOB
#define RENDER_TIME_Pin GPIO_PIN_7
#define RENDER_TIME_GPIO_Port GPIOB
#define LCD_DE_Pin GPIO_PIN_7
#define LCD_DE_GPIO_Port GPIOD
#define USER_BUTTON_Pin GPIO_PIN_13
#define USER_BUTTON_GPIO_Port GPIOC
#define LED_RED_Pin GPIO_PIN_13
#define LED_RED_GPIO_Port GPIOI
#define VSYNC_FREQ_Pin GPIO_PIN_3
#define VSYNC_FREQ_GPIO_Port GPIOG
#define LCD_BL_CTRL_Pin GPIO_PIN_0
#define LCD_BL_CTRL_GPIO_Port GPIOK
#define MCU_ACTIVE_Pin GPIO_PIN_6
#define MCU_ACTIVE_GPIO_Port GPIOA

/* USER CODE BEGIN Private defines */
#define USB_EVENT_MOUSE 0
#define USB_EVENT_KEYBOARD 1

typedef struct USBEvent {
	uint8_t event_type;
	void* event;
} USBEvent_t;
/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
