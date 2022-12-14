/**
 ******************************************************************************
 * @file    usbd_desc.h
 * @author  SRA
 * @version v1.3.0
 * @date    5-Nov-2021
 * @brief   Header for usbd_desc.c module
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
#ifndef __USBD_DESC_H
#define __USBD_DESC_H

/* Includes ------------------------------------------------------------------*/
#include "usbd_def.h"

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
#define         DEVICE_ID1          (0x1FFF7590)
#define         DEVICE_ID2          (0x1FFF7594)
#define         DEVICE_ID3          (0x1FFF7598)

#define  USB_SIZ_STRING_SERIAL       0x1A
/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */
extern USBD_DescriptorsTypeDef WCID_STREAMING_Desc;

#endif /* __USBD_DESC_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
