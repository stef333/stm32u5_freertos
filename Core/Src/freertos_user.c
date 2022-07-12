/*
 * freertos_user.c
 *
 *  Created on: Jul 12, 2022
 *      Author: Stefan
 */

#include "stdint.h"
#include "FreeRTOS.h"
#include "task.h"

void FreeRTOS_Init(void *argument);

/* Hook prototypes */
void vApplicationIdleHook(void);

/* USER CODE BEGIN 2 */
void vApplicationIdleHook( void )
{
   /* vApplicationIdleHook() will only be called if configUSE_IDLE_HOOK is set
   to 1 in FreeRTOSConfig.h. It will be called on each iteration of the idle
   task. It is essential that code added to this hook function never attempts
   to block in any way (for example, call xQueueReceive() with a block time
   specified, or call vTaskDelay()). If the application makes use of the
   vTaskDelete() API function (as this demo application does) then it is also
   important that vApplicationIdleHook() is permitted to return to its calling
   function, because it is the responsibility of the idle task to clean up
   memory allocated by the kernel to any task that has since been deleted. */
}
/* USER CODE END 2 */

/* USER CODE BEGIN PREPOSTSLEEP */
__attribute__((weak)) void PreSleepProcessing(uint32_t ulExpectedIdleTime)
{
/* place for user code */
}

__attribute__((weak)) void PostSleepProcessing(uint32_t ulExpectedIdleTime)
{
/* place for user code */
}
/* USER CODE END PREPOSTSLEEP */

/**
  * @brief  FreeRTOS initialization
  * @param  None
  * @retval None
  */
void FreeRTOS_Init(void *argument)
{
	(void) argument;

	vTaskStartScheduler();
}

/* Private application code --------------------------------------------------*/
/* USER CODE BEGIN Application */

/* USER CODE END Application */
