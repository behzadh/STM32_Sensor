/**
 ******************************************************************************
 * @file    usbd_conf.h
 * @author  SRA
 * @version v1.3.0
 * @date    5-Nov-2021
 * @brief   General low level driver configuration
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under ODE SOFTWARE LICENSE AGREEMENT
 * SLA0094, the "License"; You may not use this file except in compliance with
 * the License. You may obtain a copy of the License at:
 *                             www.st.com/SLA0094
 *
 ******************************************************************************
 */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __USBD_CONF_H
#define __USBD_CONF_H

/* Includes ------------------------------------------------------------------*/
#include "stm32l4xx_hal.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Common Config */
#define USBD_MAX_NUM_INTERFACES               1
#define USBD_MAX_NUM_CONFIGURATION            1
#define USBD_MAX_STR_DESC_SIZ                 0x100
#define USBD_SUPPORT_USER_STRING_DESC         1 
#define USBD_SELF_POWERED                     1
#define USBD_DEBUG_LEVEL                      0

/* Exported macro ------------------------------------------------------------*/

#define USB_MALLOC_CRITICAL_SECTION                     1

/* Memory management macros */
#if (IAR_MALLOC_DEBUG == 1)
 #define USBD_malloc               malloc_debug
 #define USBD_free                 free_debug
#elif (GCC_MALLOC_DEBUG == 1)
 #define HSD_malloc                gcc_malloc_debug
 #define HSD_free                  gcc_free_debug
#elif (USB_MALLOC_CRITICAL_SECTION == 1)
 #define USBD_malloc               malloc_critical
 #define USBD_free                 free_critical
#else
 #define USBD_malloc               malloc
 #define USBD_free                 free
#endif

#define USBD_memset               memset
#define USBD_memcpy               memcpy

/* DEBUG macros */
#if (USBD_DEBUG_LEVEL > 0)
#define  USBD_UsrLog(...)   printf(__VA_ARGS__);\
                            printf("\n");
#else
#define USBD_UsrLog(...)   
#endif                            

#if (USBD_DEBUG_LEVEL > 1)

#define  USBD_ErrLog(...)   printf("ERROR: ") ;\
                            printf(__VA_ARGS__);\
                            printf("\n");
#else
#define USBD_ErrLog(...)   
#endif 

#if (USBD_DEBUG_LEVEL > 2)                         
#define  USBD_DbgLog(...)   printf("DEBUG : ") ;\
                            printf(__VA_ARGS__);\
                            printf("\n");
#else
#define USBD_DbgLog(...)                         
#endif

/* Exported functions ------------------------------------------------------- */

#endif /* __USBD_CONF_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
