/**
  ******************************************************************************
  * File Name          : SDADC.c
  * Description        : This file provides code for the configuration
  *                      of the SDADC instances.
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

/* Includes ------------------------------------------------------------------*/
#include "sdadc.h"

#include "gpio.h"
#include "dma.h"

/* USER CODE BEGIN 0 */
__IO uint16_t ADC_Converter_Value[100];
void Buff_init()
{
	for (uint8_t i=0;i<100;i++)
	{
		ADC_Converter_Value[0] = 0;
	}
}
/* USER CODE END 0 */

SDADC_HandleTypeDef hsdadc1;
SDADC_HandleTypeDef hsdadc3;
DMA_HandleTypeDef hdma_sdadc1;
DMA_HandleTypeDef hdma_sdadc3;

/* SDADC1 init function */
void MX_SDADC1_Init(void)
{
  SDADC_ConfParamTypeDef ConfParamStruct;

    /**Configure the SDADC low power mode, fast conversion mode,
    slow clock mode and SDADC1 reference voltage 
    */
  hsdadc1.Instance = SDADC1;
  hsdadc1.Init.IdleLowPowerMode = SDADC_LOWPOWER_NONE;
  hsdadc1.Init.FastConversionMode = SDADC_FAST_CONV_DISABLE;
  hsdadc1.Init.SlowClockMode = SDADC_SLOW_CLOCK_DISABLE;
  hsdadc1.Init.ReferenceVoltage = SDADC_VREF_EXT;
  hsdadc1.InjectedTrigger = SDADC_SOFTWARE_TRIGGER;
  if (HAL_SDADC_Init(&hsdadc1) != HAL_OK)
  {
    _Error_Handler(__FILE__, __LINE__);
  }

    /**Configure the Injected Mode 
    */
  if (HAL_SDADC_SelectInjectedDelay(&hsdadc1, SDADC_INJECTED_DELAY_NONE) != HAL_OK)
  {
    _Error_Handler(__FILE__, __LINE__);
  }

  if (HAL_SDADC_SelectInjectedTrigger(&hsdadc1, SDADC_SOFTWARE_TRIGGER) != HAL_OK)
  {
    _Error_Handler(__FILE__, __LINE__);
  }

  if (HAL_SDADC_InjectedConfigChannel(&hsdadc1, SDADC_CHANNEL_6|SDADC_CHANNEL_8, SDADC_CONTINUOUS_CONV_ON) != HAL_OK)
  {
    _Error_Handler(__FILE__, __LINE__);
  }

    /**Set parameters for SDADC configuration 0 Register 
    */
  ConfParamStruct.InputMode = SDADC_INPUT_MODE_DIFF;
  ConfParamStruct.Gain = SDADC_GAIN_1;
  ConfParamStruct.CommonMode = SDADC_COMMON_MODE_VSSA;
  ConfParamStruct.Offset = 0;
  if (HAL_SDADC_PrepareChannelConfig(&hsdadc1, SDADC_CONF_INDEX_0, &ConfParamStruct) != HAL_OK)
  {
    _Error_Handler(__FILE__, __LINE__);
  }

    /**Configure the Regular Channel 
    */
  if (HAL_SDADC_AssociateChannelConfig(&hsdadc1, SDADC_CHANNEL_6, SDADC_CONF_INDEX_0) != HAL_OK)
  {
    _Error_Handler(__FILE__, __LINE__);
  }

    /**Configure the Injected Channel 
    */
  if (HAL_SDADC_AssociateChannelConfig(&hsdadc1, SDADC_CHANNEL_8, SDADC_CONF_INDEX_0) != HAL_OK)
  {
    _Error_Handler(__FILE__, __LINE__);
  }

}
/* SDADC3 init function */
void MX_SDADC3_Init(void)
{
  SDADC_ConfParamTypeDef ConfParamStruct;

    /**Configure the SDADC low power mode, fast conversion mode,
    slow clock mode and SDADC1 reference voltage 
    */
  hsdadc3.Instance = SDADC3;
  hsdadc3.Init.IdleLowPowerMode = SDADC_LOWPOWER_NONE;
  hsdadc3.Init.FastConversionMode = SDADC_FAST_CONV_DISABLE;
  hsdadc3.Init.SlowClockMode = SDADC_SLOW_CLOCK_DISABLE;
  hsdadc3.Init.ReferenceVoltage = SDADC_VREF_EXT;
  hsdadc3.InjectedTrigger = SDADC_SOFTWARE_TRIGGER;
  if (HAL_SDADC_Init(&hsdadc3) != HAL_OK)
  {
    _Error_Handler(__FILE__, __LINE__);
  }

    /**Configure the Injected Mode 
    */
  if (HAL_SDADC_SelectInjectedDelay(&hsdadc3, SDADC_INJECTED_DELAY_NONE) != HAL_OK)
  {
    _Error_Handler(__FILE__, __LINE__);
  }

  if (HAL_SDADC_SelectInjectedTrigger(&hsdadc3, SDADC_SOFTWARE_TRIGGER) != HAL_OK)
  {
    _Error_Handler(__FILE__, __LINE__);
  }

  if (HAL_SDADC_InjectedConfigChannel(&hsdadc3, SDADC_CHANNEL_8, SDADC_CONTINUOUS_CONV_ON) != HAL_OK)
  {
    _Error_Handler(__FILE__, __LINE__);
  }

    /**Set parameters for SDADC configuration 0 Register 
    */
  ConfParamStruct.InputMode = SDADC_INPUT_MODE_DIFF;
  ConfParamStruct.Gain = SDADC_GAIN_1;
  ConfParamStruct.CommonMode = SDADC_COMMON_MODE_VSSA;
  ConfParamStruct.Offset = 0;
  if (HAL_SDADC_PrepareChannelConfig(&hsdadc3, SDADC_CONF_INDEX_0, &ConfParamStruct) != HAL_OK)
  {
    _Error_Handler(__FILE__, __LINE__);
  }

    /**Configure the Injected Channel 
    */
  if (HAL_SDADC_AssociateChannelConfig(&hsdadc3, SDADC_CHANNEL_8, SDADC_CONF_INDEX_0) != HAL_OK)
  {
    _Error_Handler(__FILE__, __LINE__);
  }

}

void HAL_SDADC_MspInit(SDADC_HandleTypeDef* sdadcHandle)
{

  GPIO_InitTypeDef GPIO_InitStruct;
  if(sdadcHandle->Instance==SDADC1)
  {
  /* USER CODE BEGIN SDADC1_MspInit 0 */

  /* USER CODE END SDADC1_MspInit 0 */
    /* SDADC1 clock enable */
    __HAL_RCC_SDADC1_CLK_ENABLE();
  
    /**SDADC1 GPIO Configuration    
    PB0     ------> SDADC1_AIN6P
    PB1     ------> SDADC1_AIN6M
    PE8     ------> SDADC1_AIN8P
    PE9     ------> SDADC1_AIN8M 
    */
    GPIO_InitStruct.Pin = SDC1_6P_Pin|ADC1_6M_Pin;
    GPIO_InitStruct.Mode = GPIO_MODE_ANALOG;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

    GPIO_InitStruct.Pin = ADC1_8P_Pin|ADC1_8M_Pin;
    GPIO_InitStruct.Mode = GPIO_MODE_ANALOG;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    HAL_GPIO_Init(GPIOE, &GPIO_InitStruct);

    /* SDADC1 DMA Init */
    /* SDADC1 Init */
    hdma_sdadc1.Instance = DMA2_Channel3;
    hdma_sdadc1.Init.Direction = DMA_PERIPH_TO_MEMORY;
    hdma_sdadc1.Init.PeriphInc = DMA_PINC_DISABLE;
    hdma_sdadc1.Init.MemInc = DMA_MINC_ENABLE;
    hdma_sdadc1.Init.PeriphDataAlignment = DMA_PDATAALIGN_HALFWORD;
    hdma_sdadc1.Init.MemDataAlignment = DMA_MDATAALIGN_HALFWORD;
    hdma_sdadc1.Init.Mode = DMA_CIRCULAR;
    hdma_sdadc1.Init.Priority = DMA_PRIORITY_LOW;
    if (HAL_DMA_Init(&hdma_sdadc1) != HAL_OK)
    {
      _Error_Handler(__FILE__, __LINE__);
    }

    __HAL_LINKDMA(sdadcHandle,hdma,hdma_sdadc1);

  /* USER CODE BEGIN SDADC1_MspInit 1 */
	//HAL_DMA_Start(&hdma_sdadc1,SDADC1->JDATAR,(uint32_t)ADC_Converter_Value,100);
  /* USER CODE END SDADC1_MspInit 1 */
  }
  else if(sdadcHandle->Instance==SDADC3)
  {
  /* USER CODE BEGIN SDADC3_MspInit 0 */

  /* USER CODE END SDADC3_MspInit 0 */
    /* SDADC3 clock enable */
    __HAL_RCC_SDADC3_CLK_ENABLE();
  
    /**SDADC3 GPIO Configuration    
    PB14     ------> SDADC3_AIN8P
    PB15     ------> SDADC3_AIN8M
    PD8     ------> SDADC3_AIN6P 
    */
    GPIO_InitStruct.Pin = SDC3_8P_Pin|ADC3_8M_Pin;
    GPIO_InitStruct.Mode = GPIO_MODE_ANALOG;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

    GPIO_InitStruct.Pin = ADC3_6P_Pin;
    GPIO_InitStruct.Mode = GPIO_MODE_ANALOG;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    HAL_GPIO_Init(ADC3_6P_GPIO_Port, &GPIO_InitStruct);

    /* SDADC3 DMA Init */
    /* SDADC3 Init */
    hdma_sdadc3.Instance = DMA2_Channel5;
    hdma_sdadc3.Init.Direction = DMA_PERIPH_TO_MEMORY;
    hdma_sdadc3.Init.PeriphInc = DMA_PINC_DISABLE;
    hdma_sdadc3.Init.MemInc = DMA_MINC_ENABLE;
    hdma_sdadc3.Init.PeriphDataAlignment = DMA_PDATAALIGN_HALFWORD;
    hdma_sdadc3.Init.MemDataAlignment = DMA_MDATAALIGN_HALFWORD;
    hdma_sdadc3.Init.Mode = DMA_CIRCULAR;
    hdma_sdadc3.Init.Priority = DMA_PRIORITY_LOW;
    if (HAL_DMA_Init(&hdma_sdadc3) != HAL_OK)
    {
      _Error_Handler(__FILE__, __LINE__);
    }

    __HAL_LINKDMA(sdadcHandle,hdma,hdma_sdadc3);

  /* USER CODE BEGIN SDADC3_MspInit 1 */

  /* USER CODE END SDADC3_MspInit 1 */
  }
}

void HAL_SDADC_MspDeInit(SDADC_HandleTypeDef* sdadcHandle)
{

  if(sdadcHandle->Instance==SDADC1)
  {
  /* USER CODE BEGIN SDADC1_MspDeInit 0 */

  /* USER CODE END SDADC1_MspDeInit 0 */
    /* Peripheral clock disable */
    __HAL_RCC_SDADC1_CLK_DISABLE();
  
    /**SDADC1 GPIO Configuration    
    PB0     ------> SDADC1_AIN6P
    PB1     ------> SDADC1_AIN6M
    PE8     ------> SDADC1_AIN8P
    PE9     ------> SDADC1_AIN8M 
    */
    HAL_GPIO_DeInit(GPIOB, SDC1_6P_Pin|ADC1_6M_Pin);

    HAL_GPIO_DeInit(GPIOE, ADC1_8P_Pin|ADC1_8M_Pin);

    /* SDADC1 DMA DeInit */
    HAL_DMA_DeInit(sdadcHandle->hdma);

    /* SDADC1 interrupt Deinit */
    HAL_NVIC_DisableIRQ(SDADC1_IRQn);
  /* USER CODE BEGIN SDADC1_MspDeInit 1 */

  /* USER CODE END SDADC1_MspDeInit 1 */
  }
  else if(sdadcHandle->Instance==SDADC3)
  {
  /* USER CODE BEGIN SDADC3_MspDeInit 0 */

  /* USER CODE END SDADC3_MspDeInit 0 */
    /* Peripheral clock disable */
    __HAL_RCC_SDADC3_CLK_DISABLE();
  
    /**SDADC3 GPIO Configuration    
    PB14     ------> SDADC3_AIN8P
    PB15     ------> SDADC3_AIN8M
    PD8     ------> SDADC3_AIN6P 
    */
    HAL_GPIO_DeInit(GPIOB, SDC3_8P_Pin|ADC3_8M_Pin);

    HAL_GPIO_DeInit(ADC3_6P_GPIO_Port, ADC3_6P_Pin);

    /* SDADC3 DMA DeInit */
    HAL_DMA_DeInit(sdadcHandle->hdma);

    /* SDADC3 interrupt Deinit */
    HAL_NVIC_DisableIRQ(SDADC3_IRQn);
  /* USER CODE BEGIN SDADC3_MspDeInit 1 */

  /* USER CODE END SDADC3_MspDeInit 1 */
  }
} 

/* USER CODE BEGIN 1 */

/* USER CODE END 1 */

/**
  * @}
  */

/**
  * @}
  */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
