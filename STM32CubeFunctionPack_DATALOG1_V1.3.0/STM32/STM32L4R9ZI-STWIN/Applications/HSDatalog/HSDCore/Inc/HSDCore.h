/**
 ******************************************************************************
 * @file    HSDCore.h
 * @author  SRA - MCD
 * @version v1.3.0
 * @date    5-Nov-2021
 * @brief   HSDCore global configuration file.
 *
 * This file contain the main configuration values for the module.
 * The application can provide its own value in the HSDConfig.h file.
 *
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
#ifndef HSDCORE_INC_HSDCORE_H_
#define HSDCORE_INC_HSDCORE_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "HSDCoreConfig.h"

// Task priorities
// ***************

#ifndef HSD_I2C_RD_THREAD_PRIO
#define HSD_I2C_RD_THREAD_PRIO                      osPriorityAboveNormal
#endif

#ifndef HSD_SPI_RD_THREAD_PRIO
#define HSD_SPI_RD_THREAD_PRIO                      osPriorityAboveNormal
#endif

#ifndef HSD_IIS3DWB_THREAD_PRIO
#define HSD_IIS3DWB_THREAD_PRIO                     osPriorityAboveNormal
#endif

#ifndef HSD_IIS2MDC_THREAD_PRIO
#define HSD_IIS2MDC_THREAD_PRIO                     osPriorityAboveNormal
#endif

#ifndef HSD_IIS2DH_THREAD_PRIO
#define HSD_IIS2DH_THREAD_PRIO                      osPriorityAboveNormal
#endif

#ifndef HSD_STTS751_THREAD_PRIO
#define HSD_STTS751_THREAD_PRIO                     osPriorityAboveNormal
#endif

#ifndef HSD_LPS22HH_THREAD_PRIO
#define HSD_LPS22HH_THREAD_PRIO                     osPriorityAboveNormal
#endif

#ifndef HSD_HTS221_THREAD_PRIO
#define HSD_HTS221_THREAD_PRIO                      osPriorityAboveNormal
#endif

#ifndef HSD_IMP34DT05_THREAD_PRIO
#define HSD_IMP34DT05_THREAD_PRIO                   osPriorityAboveNormal
#endif

#ifndef HSD_IMP23ABSU_THREAD_PRIO
#define HSD_IMP23ABSU_THREAD_PRIO                    osPriorityAboveNormal
#endif

#ifndef HSD_ISM330DHCX_THREAD_PRIO
#define HSD_ISM330DHCX_THREAD_PRIO                  osPriorityAboveNormal
#endif

/*
 * Each time a task is executing the corresponding pin is SET otherwise is RESET
 * Pins
 * Set configUSE_APPLICATION_TASK_TAG to 1 in FreeRTOSConfig.h to enable the Task debugging mode.
 */
#ifndef HSD_TASK_DEBUG_PINS_ENABLE
#define HSD_TASK_DEBUG_PINS_ENABLE    0
#endif

/*
 * HSD_USE_DUMMY_DATA, if enabled, replaces real sensor data with a 2 bytes idependend counter
 * for each sensor. Useful to debug the complete application and verify that data are stored or
 * streamed correctly.
 * Sensitivity parameter is forced to to 1.
 * Timestamp is not replaced, if you want to disable it, set samplesPerTS parameter to 0.
 */
#ifndef HSD_USE_DUMMY_DATA
#define HSD_USE_DUMMY_DATA                           0
#endif
  
  

#ifndef HSD_malloc
#define HSD_malloc                                 malloc
#endif
  
#ifndef HSD_calloc
#define HSD_calloc                                 calloc
#endif
  
#ifndef HSD_free
#define HSD_free                                    free
#endif

#ifndef HSD_memset
#define HSD_memset                                  memset
#endif

#ifndef HSD_memcpy
#define HSD_memcpy                                  memcpy
#endif


#ifdef __cplusplus
}
#endif

#endif /* HSDCORE_INC_HSDCORE_H_ */
