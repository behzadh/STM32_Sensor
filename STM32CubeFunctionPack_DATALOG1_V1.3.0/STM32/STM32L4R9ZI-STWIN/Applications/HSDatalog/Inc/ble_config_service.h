/**
  ******************************************************************************
  * @file    ble_config_service.h 
  * @author  SRA
  * @version v1.3.0
  * @date    5-Nov-2021
  * @brief   Sensors services APIs
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
#ifndef _BLE_CONFIG_SERVICE_H_
#define _BLE_CONFIG_SERVICE_H_

#ifdef __cplusplus
 extern "C" {
#endif 

/* Includes ------------------------------------------------------------------*/

#include <stdlib.h>

   
/* Exported functions ------------------------------------------------------- */

void ble_interface_init(void);
extern void HCI_Event_CB(void *pckt);


/* Exported constants --------------------------------------------------------*/

#define NAME_HSD 'D','T','L','G',HSD_VERSION_MAJOR,HSD_VERSION_MINOR,HSD_VERSION_PATCH



#ifdef __cplusplus
}
#endif

#endif /* _BLE_CONFIG_SERVICE_H_ */

/******************* (C) COPYRIGHT 2016 STMicroelectronics *****END OF FILE****/
