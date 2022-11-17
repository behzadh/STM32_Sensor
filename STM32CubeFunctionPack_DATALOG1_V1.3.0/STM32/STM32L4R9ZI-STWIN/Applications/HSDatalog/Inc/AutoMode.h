/**
 ******************************************************************************
 * @file    AutoMode.h
 * @author  SRA
 * @version v1.3.0
 * @date    5-Nov-2021
 * @brief   Auto mode public API declaration.
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
#ifndef INC_AUTOMODE_H_
#define INC_AUTOMODE_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "AutoModeModel.h"
#include "systypes.h"

/**
 * This function must be called at least once before using
 * the ::AutoModeCfg object. It reset the model.
 */
void AMReset(void);

/**
 * Get a pointer to the only one instance of the ::AutoModeCfg object.
 *
 * @return a pointer to the only one instance of the ::AutoModeCfg object.
 */
AutoModeCfg *AMGetIstance(void);

/**
 * Initialize the system instance with the value from pxSource.
 * NOT IMPLEMENTED.
 *
 * @param pxSource [IN] specifies an auto mode configuration object.
 * @return SYS_NO_ERROR_CODE if valid, a specific error code otherwise.
 */
sys_error_code_t AMCopyConfiguration(const AutoModeCfg *pxSource);

/**
 * Not implemented.
 *
 * @param pcSerializedCfg
 * @param pxConfig
 * @return
 */
sys_error_code_t AMParseCfgFromString(const char *pcSerializedCfg, AutoModeCfg *pxConfig);

/**
 *  Initialize the system instance with the data coming from the serialized string.
 *
 * @param pcSerializedCfg [IN] specifies the serialized string. It must be formatted in JSON format,
 *                        according to the auto mode specification.
 * @return SYS_NO_ERROR_CODE if success, an error code otherwise.
 */
sys_error_code_t AMLoadCfgFromString(const char *pcSerializedCfg);


#ifdef __cplusplus
}
#endif

#endif /* INC_AUTOMODE_H_ */
