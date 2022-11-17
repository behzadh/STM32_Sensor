/**
 ******************************************************************************
 * @file    systypes.h
 * @author  SRA
 * @version v1.3.0
 * @date    5-Nov-2021
 * @brief   Common type declaration
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

#ifndef SYSTYPES_H_
#define SYSTYPES_H_

#ifdef __cplusplus
extern "C" {
#endif

/**
 * Boolean type definition.
 */
typedef enum {
	FALSE = 0,      //!< FALSE
	TRUE  = !FALSE  //!< TRUE
} boolean_t;

/**
 * Specifies a generic error type. It could be a system wide error type definition.
 */
typedef uint32_t sys_error_code_t;

#ifdef __cplusplus
}
#endif


#endif /* SYSTYPES_H_ */
