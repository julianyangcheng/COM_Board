/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  ** This notice applies to any and all portions of this file
  * that are not between comment pairs USER CODE BEGIN and
  * USER CODE END. Other portions of this file, whether 
  * inserted by the user or by software development tools
  * are owned by their respective copyright owners.
  *
  * COPYRIGHT(c) 2018 STMicroelectronics
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H__
#define __MAIN_H__

/* Includes ------------------------------------------------------------------*/

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private define ------------------------------------------------------------*/

#define DI3_Pin GPIO_PIN_0
#define DI3_GPIO_Port GPIOA
#define LED1_Pin GPIO_PIN_1
#define LED1_GPIO_Port GPIOA
#define LED2_Pin GPIO_PIN_2
#define LED2_GPIO_Port GPIOA
#define LED3_Pin GPIO_PIN_3
#define LED3_GPIO_Port GPIOA
#define DAC1_1_Pin GPIO_PIN_4
#define DAC1_1_GPIO_Port GPIOA
#define DAC1_2_Pin GPIO_PIN_5
#define DAC1_2_GPIO_Port GPIOA
#define DAC2_1_Pin GPIO_PIN_6
#define DAC2_1_GPIO_Port GPIOA
#define SDC1_6P_Pin GPIO_PIN_0
#define SDC1_6P_GPIO_Port GPIOB
#define ADC1_6M_Pin GPIO_PIN_1
#define ADC1_6M_GPIO_Port GPIOB
#define DI2_Pin GPIO_PIN_2
#define DI2_GPIO_Port GPIOB
#define ADC1_8P_Pin GPIO_PIN_8
#define ADC1_8P_GPIO_Port GPIOE
#define ADC1_8M_Pin GPIO_PIN_9
#define ADC1_8M_GPIO_Port GPIOE
#define SDC3_8P_Pin GPIO_PIN_14
#define SDC3_8P_GPIO_Port GPIOB
#define ADC3_8M_Pin GPIO_PIN_15
#define ADC3_8M_GPIO_Port GPIOB
#define ADC3_6P_Pin GPIO_PIN_8
#define ADC3_6P_GPIO_Port GPIOD
#define SPI_SCK_Pin GPIO_PIN_8
#define SPI_SCK_GPIO_Port GPIOA
#define SPI_MISO_Pin GPIO_PIN_9
#define SPI_MISO_GPIO_Port GPIOA
#define SPI_MOSI_Pin GPIO_PIN_10
#define SPI_MOSI_GPIO_Port GPIOA
#define SPI_NSS_Pin GPIO_PIN_11
#define SPI_NSS_GPIO_Port GPIOA
#define DO1_Pin GPIO_PIN_12
#define DO1_GPIO_Port GPIOA
#define SWDIO_Pin GPIO_PIN_13
#define SWDIO_GPIO_Port GPIOA
#define DO2_Pin GPIO_PIN_6
#define DO2_GPIO_Port GPIOF
#define DI1_Pin GPIO_PIN_7
#define DI1_GPIO_Port GPIOF
#define SWCLK_Pin GPIO_PIN_14
#define SWCLK_GPIO_Port GPIOA
#define JTDI_Pin GPIO_PIN_15
#define JTDI_GPIO_Port GPIOA
#define JTDO_Pin GPIO_PIN_3
#define JTDO_GPIO_Port GPIOB
#define JRST_Pin GPIO_PIN_4
#define JRST_GPIO_Port GPIOB
#define USART1_Ctrl_Pin GPIO_PIN_5
#define USART1_Ctrl_GPIO_Port GPIOB
#define RS485_TX_Pin GPIO_PIN_6
#define RS485_TX_GPIO_Port GPIOB
#define RS485_RX_Pin GPIO_PIN_7
#define RS485_RX_GPIO_Port GPIOB
#define CAN_TX_Pin GPIO_PIN_8
#define CAN_TX_GPIO_Port GPIOB
#define CAN_RX_Pin GPIO_PIN_9
#define CAN_RX_GPIO_Port GPIOB

/* ########################## Assert Selection ############################## */
/**
  * @brief Uncomment the line below to expanse the "assert_param" macro in the 
  *        HAL drivers code
  */
/* #define USE_FULL_ASSERT    1U */

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
 extern "C" {
#endif
void _Error_Handler(char *, int);

#define Error_Handler() _Error_Handler(__FILE__, __LINE__)
#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H__ */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
