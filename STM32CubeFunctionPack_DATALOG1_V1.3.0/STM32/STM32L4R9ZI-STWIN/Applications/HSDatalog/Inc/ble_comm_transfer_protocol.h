/**
  ******************************************************************************
  * @file    ble_comm_transfer_protocol.h
  * @author  SRA
  * @version v1.3.0
  * @date    5-Nov-2021
  * @brief   This file contains definitions for BLE commands transfer protocol.
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
#ifndef __BLE_COMMANDS_TRANSFER_PROTOCOL_H
#define __BLE_COMMANDS_TRANSFER_PROTOCOL_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32l4xx_hal.h"
  
/**
  * @brief  This function is called to parse a BLE_COMM_TP packet.
  * @param  buffer_out: pointer to the output buffer.
  * @param  buffer_in: pointer to the input data.
  * @param  len: buffer in length
  * @retval Buffer out length.
  */
uint32_t BLECommand_TP_Parse(uint8_t** buffer_out, uint8_t* buffer_in, uint32_t len);

/**
  * @brief  This function is called to prepare a BLE_COMM_TP packet.
  * @param  buffer_out: pointer to the buffer used to save BLE_COMM_TP packet.
  * @param  buffer_in: pointer to the input data.
  * @param  len: buffer in length
  * @retval Buffer out length.
  */
uint32_t BLECommand_TP_Encapsulate(uint8_t* buffer_out, uint8_t* buffer_in, uint16_t len); 

#ifdef __cplusplus
}
#endif

#endif /* __BLE_COMMANDS_TRANSFER_PROTOCOL_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
