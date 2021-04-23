/**
  ******************************************************************************
  * @file    led.h
  * @author  likai
  * @date    2021-4-13
  * @brief   This file contains all the functions prototypes for the FLASH 
  *          firmware library.
  ******************************************************************************
  * @attention
  *
  *
  ******************************************************************************
  */

#ifndef __LED_H
#define __LED_H

/* Includes ------------------------------------------------------------------*/
#include "sys.h"

typedef enum 
{
  LED1 = 0,
  LED2 = 1,
  LED3 = 2,
  LED4 = 3
} Led_TypeDef;

#define LEDn                             4

#define LED1_PIN                         GPIO_Pin_6
#define LED1_GPIO_PORT                   GPIOG
#define LED1_GPIO_CLK                    RCC_AHB1Periph_GPIOG  
  
#define LED2_PIN                         GPIO_Pin_4
#define LED2_GPIO_PORT                   GPIOD
#define LED2_GPIO_CLK                    RCC_AHB1Periph_GPIOD  
  
#define LED3_PIN                         GPIO_Pin_5
#define LED3_GPIO_PORT                   GPIOD
#define LED3_GPIO_CLK                    RCC_AHB1Periph_GPIOD  
  
#define LED4_PIN                         GPIO_Pin_3
#define LED4_GPIO_PORT                   GPIOK
#define LED4_GPIO_CLK                    RCC_AHB1Periph_GPIOK

void LEDInit(Led_TypeDef Led);
void LEDOn(Led_TypeDef Led);
void LEDOff(Led_TypeDef Led);
void LEDToggle(Led_TypeDef Led);	

#endif
