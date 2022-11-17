/**
 ******************************************************************************
 * @file    OTA.h
 * @author  SRA - Central Labs
 * @version v1.3.0
 * @date    5-Nov-2021
 * @brief   Over-the-Air Update API
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under ODE SOFTWARE LICENSE AGREEMENT
 * SLA0055, the "License"; You may not use this file except in compliance with
 * the License. You may obtain a copy of the License at:
 *                             www.st.com/SLA0055
 *
 ******************************************************************************
 */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef _OTA_H_
#define _OTA_H_

#ifdef __cplusplus
 extern "C" {
#endif

/* Exported defines ---------------------------------------------------------*/

//* 1008Kbytes Max Program Size */
#define OTA_MAX_PROG_SIZE (0x100000-0x4000-16)

extern uint8_t CurrentActiveBank;

/* Exported functions ---------------------------------------------------------*/

/* API for preparing the Flash for receiving the Update. It defines also the Size of the Update and the CRC value aspected */
extern void StartUpdateFWBlueMS(uint32_t SizeOfUpdate, uint32_t uwCRCValue);
/* API for storing chuck of data to Flash.
 * When it has recived the total number of byte defined by StartUpdateFWBlueMS,
 * it computes the CRC value and if it matches the aspected CRC value,
 * it writes the Magic Number in Flash for BootLoader */
extern int8_t UpdateFWBlueMS(uint32_t *SizeOfUpdateBlueFW, uint8_t *att_data, int32_t data_length, uint8_t WriteMagicNum);

extern void EnableDisableDualBoot(void);
void OTA_Verify_Current_Active_Bank(void);

#ifdef __cplusplus
}
#endif

#endif /* _OTA_H_ */

/******************* (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
