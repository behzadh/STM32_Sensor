/**
  ******************************************************************************
  * @file    HSD_json.h
  * @author  SRA - MCD
  * @version v1.3.0
  * @date    5-Nov-2021
  * @brief   This file contains all the functions prototypes for the main.c
  *          file.
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
#ifndef __HSD_JSON_H
#define __HSD_JSON_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "com_manager.h"
#include "HSD_tags.h"
#include "string.h"
#include "math.h"

/* Exported types ------------------------------------------------------------*/

/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
  
#define PRETTY_JSON 1U
#define SHORT_JSON  0U
  
#define PRECISION6(n) floor(1000000*n)/1000000 
  
/* Exported functions ------------------------------------------------------- */
  
int32_t HSD_JSON_set_allocation_functions(void * (*Malloc_Function)(size_t), void(*Free_Function)(void *));
int32_t HSD_JSON_free(void * mem);
int32_t HSD_JSON_serialize_Device(COM_Device_t *Device, char **SerializedJSON, uint8_t pretty);
int32_t HSD_JSON_serialize_DeviceInfo(COM_DeviceDescriptor_t *DeviceInfo, char **SerializedJSON);
int32_t HSD_JSON_serialize_TagList(COM_TagList_t *TagList, char **SerializedJSON, uint8_t pretty);
int32_t HSD_JSON_serialize_Sensor(COM_Sensor_t *Sensor, char **SerializedJSON);
int32_t HSD_JSON_serialize_SensorDescriptor(COM_SensorDescriptor_t *SensorDescriptor, char **SerializedJSON);
int32_t HSD_JSON_serialize_SensorStatus(uint8_t sensorId, COM_SensorStatus_t *SensorStatus, char **SerializedJSON);
int32_t HSD_JSON_serialize_SubSensorDescriptor(COM_SubSensorDescriptor_t *SubSensorDescriptor, char **SerializedJSON);
int32_t HSD_JSON_serialize_SubSensorStatus(COM_SubSensorStatus_t *SubSensorStatus, char **SerializedJSON);

int32_t HSD_JSON_serialize_RefreshSensorStatus(uint8_t sensorId, COM_SensorStatus_t *SensorStatus, char **SerializedJSON);
int32_t HSD_JSON_serialize_FWStatus_Performance(char **SerializedJSON, char *chrgState, uint32_t mV, uint32_t level, uint16_t cpu_usage);
int32_t HSD_JSON_serialize_FWStatus_Logging(char **SerializedJSON, uint8_t sdDetected, uint8_t isLoggingActive);
int32_t HSD_JSON_serialize_FWStatus_Network(char **SerializedJSON, char *ssid, char *password, char *ip);

//int32_t HSD_JSON_serialize_FWStatus(char **SerializedJSON, uint8_t cmd_type);
int32_t HSD_JSON_serialize_Acquisition(COM_AcquisitionDescriptor_t *AcquisitionDescriptor, char **SerializedJSON, uint8_t pretty);
  
int32_t HSD_JSON_parse_Device(char *SerializedJSON, COM_Device_t * Device);
int32_t HSD_JSON_parse_Status(char *SerializedJSON, COM_SensorStatus_t * SensorStatus);
int32_t HSD_JSON_parse_Command(char *SerializedJSON, COM_Command_t * Command);
int32_t HSD_JSON_parse_SetDeviceAliasCommand(char *SerializedJSON, char *alias, uint8_t aliasSize);
int32_t HSD_JSON_parse_EnableTagCommand(char *SerializedJSON, uint8_t *class_id, HSD_Tags_Enable_t *enable);
int32_t HSD_JSON_parse_UpdateTagLabelCommand(char *SerializedJSON, uint8_t *class_id, char *label, uint8_t labelSize);
int32_t HSD_JSON_parse_AcqInfoCommand(char *SerializedJSON, char *name, uint8_t nameSize, char *notes, uint8_t notesSize);
int32_t HSD_JSON_parse_MlcConfigCommand(char *SerializedJSON, uint32_t *mlcConfigSize, char *mlcConfigData, uint32_t mlcConfigDataSize);
int32_t HSD_JSON_parse_StartTime(char *SerializedJSON, COM_AcquisitionDescriptor_t *AcquisitionDescriptor);
int32_t HSD_JSON_parse_EndTime(char *SerializedJSON, COM_AcquisitionDescriptor_t *AcquisitionDescriptor);


#ifdef __cplusplus
}
#endif

#endif /* __HSD_JSON_H */


/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
