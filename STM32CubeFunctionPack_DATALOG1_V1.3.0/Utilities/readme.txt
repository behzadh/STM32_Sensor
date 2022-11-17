/**
  ******************************************************************************
  * @file    readme.txt  
  * @author  SRA
  * @version v2.3.0
  * @date    5-Nov-2021
  * @brief   HSDatalog Utilities
  ******************************************************************************
  *
  * Copyright (c) 2021 STMicroelectronics. All rights reserved.
  *
  * The STMicroelectronics corporate logo is a trademark of STMicroelectronics
  *                          
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *           
  * - Redistributions of source code must retain the above copyright notice, this 
  * list of conditions and the following disclaimer.
  * - Redistributions in binary form must reproduce the above copyright notice, 
  * this list of conditions and the following disclaimer in the documentation and/or
  * other materials provided with the distribution.
  * - Neither the name nor trademarks of STMicroelectronics International N.V. nor 
  * any other STMicroelectronics company nor the names of its contributors may be 
  * used to endorse or promote products derived from this software without specific 
  * prior written permission.
  *                          
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND 
  * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED 
  * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. 
  * IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, 
  * INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, 
  * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, 
  * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF 
  * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE 
  * OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED 
  * OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */

Application Description 

The High-Speed DataLog firmware provides an easy way to save data from any combination 
of sensors and microphones configured at their maximum sampling rate.
Sensor data can be either stored on a micro SD Card, SDHC (Secure Digital High Capacity) 
formatted with the FAT32 file system, or streamed to a PC via USB (WinUSB class).

To save data via USB, a command line interface example is available in 
“Utilities/cli_example”.
USB_DataLog_Run.bat and USB_DataLog_Run.sh scripts provide a ready to use example.

Together with HSDatalog application, inside the Utilities folder, MATLAB and a Python 
scripts are available to automatically read and plot the data saved by the application. 
The scripts have been successfully tested with MATLAB v2019a and Python 3.7. 

The 'ReadSensorDataApp.mlapp' MATLAB app is also available, developed and tested using the 
App Designer tool available since MATLAB v2019a.

Python_SDK folder contains also a "how to use" Jupyter Notebook, with easy-to-use examples
to show the main functionalities of our HSDatalog Python SDK.


/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
