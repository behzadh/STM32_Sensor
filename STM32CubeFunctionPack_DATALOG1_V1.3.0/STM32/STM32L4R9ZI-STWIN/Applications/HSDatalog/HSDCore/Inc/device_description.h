/**
  ******************************************************************************
  * @file    com_manager.h
  * @author  SRA - MCD
  * @version v1.3.0
  * @date    5-Nov-2021
  * @brief   Header for com_manager.c file.
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
#ifndef __DEVICE_DESCRIPTION_H
#define __DEVICE_DESCRIPTION_H

/* Includes ------------------------------------------------------------------*/
#include "com_manager.h"
/* Exported types ------------------------------------------------------------*/

typedef struct
{
  char     alias[HSD_DEVICE_ALIAS_LENGTH];
  char     partNumber[HSD_DEVICE_PNUMBER_LENGTH];
  char     URL[HSD_DEVICE_URL_LENGTH];
  char     fwName[HSD_DEVICE_FW_NAME_LENGTH];
  char     fwVersion[HSD_DEVICE_FW_VERSION_LENGTH];
}
HSD_DeviceDescriptor_Init_t;

/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */

//void set_default_description(void);
void set_device_description(HSD_DeviceDescriptor_Init_t *init);
void update_sensorStatus(COM_SensorStatus_t * oldSensorStatus, COM_SensorStatus_t * newSensorStatus, uint8_t sID);
void update_sensorStatus_from_USB(COM_SensorStatus_t * oldSensorStatus, COM_SensorStatus_t * newSensorStatus, uint8_t sID);
void update_samplesPerTimestamp(COM_Sensor_t * pSensor);
uint8_t update_sensors_config(void);


#endif /* __DEVICE_DESCRIPTION_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
