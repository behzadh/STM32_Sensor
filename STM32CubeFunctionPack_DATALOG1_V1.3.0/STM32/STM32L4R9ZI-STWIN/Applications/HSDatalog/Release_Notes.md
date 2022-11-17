---
pagetitle: Release Notes for FP-SNS-DATALOG1 application example
lang: en
header-includes: <link rel="icon" type="image/x-icon" href="_htmresc/favicon.png" />
---

::: {.row}
::: {.col-sm-12 .col-lg-4}

<center>
# Release Notes for <mark>HSDatalog application</mark>
Copyright &copy; 2021  STMicroelectronics\
    
[![ST logo](_htmresc/st_logo.png)](https://www.st.com){.logo}
</center>


# License

This software package is licensed by ST under ST license SLA0094, the
"License"; You may not use this component except in compliance with the
License. You may obtain a copy of the License at:
[SLA0094](https://www.st.com/SLA0094)

# Purpose

The HSDatalog (High-Speed DataLog) works with all sensors configured at their maximum sampling rate.
Sensor data can be stored on micro SD Card or can be streamed via USB to a PC host

 - WARNING: SD card performances are very different between each other.
   This example works properly with microSD card Speed Class 10 (C10) and UHS Speed Class 1 (U1)
   (i.e: SanDisk Industrial 32GB U1 C10, Verbatim Premium 16GB U1 C10 or Transcend Premium 16 GB U1 C10).
   It is not granted that the application can still work properly if a different kind of microSD card
   is used (i.e: you can see some data loss due to a SD Card low write speed).

To automatically read and plot the data, MATLAB and Python scripts are available in Utilites folder.
In order to handle JSON files the script requires MATLAB v2019a or newer.
Python class was developed and tested using Python 3.7.

Also a MATLAB app 'ReadSensorDataApp.mlapp' is available, developed and tested using the App Designer
tool available in MATLAB v2019a.

:::

::: {.col-sm-12 .col-lg-8}
# Update History

::: {.collapse}
<input type="checkbox" id="collapse-section5" checked aria-hidden="true">
<label for="collapse-section5" aria-hidden="true">v1.3.0 / 5-Nov-2021</label>
<div>		

## Main Changes

### Maintenance and patch release

- **Added Fast FOTA feature**
- **Updated to BlueST SDK v2**
- **Redesigned BLE advertisement**
- **Solved malloc issue in STM32CubeIDE project**
- Increased minimum sd buffer size
- Typo fixed in stm32l4xx_it.c: solve compilation error in Linux
- Enabled BLE MTU exchange
- Added end_time and start_time fields in AcquisitionDescriptor
- Reviewed SD card memory check and user button anti-bounce

## Known Limitations

- None

## Development Toolchains and Compilers

-   IAR Embedded Workbench for ARM (EWARM) toolchain V8.50.9 + STLink-V3
-   MDK-ARM toolchain V5.32.0 + STLink-V3
-   STM32CubeIDE v1.7.0 + STLink-V3

## Supported Devices and Boards

- [STEVAL-STWINKT1](https://www.st.com/en/evaluation-tools/steval-stwinkt1.html)
- [STEVAL-STWINKT1B](https://www.st.com/en/evaluation-tools/steval-stwinkt1b.html)

## Backward Compatibility

- None

## Dependencies

- None


</div>
:::

::: {.collapse}
<input type="checkbox" id="collapse-section4" aria-hidden="true">
<label for="collapse-section4" aria-hidden="true">v1.2.0 / 25-Jun-2021</label>
<div>		

## Main Changes

### Maintenance and patch release

  - **Updated hci_tl_interface to solve BlueNRG-2 bug**
  - **Loading an UCF enables MLC subsensor automatically**
  - **New feature: check if SD is full and stop automatically the acquisition**
  - Code cleaning and refactoring for SDM_CalculateSdWriteBufferSize function
  - Handling errors by LED blinking
  - Solved warnings in sdcard_manager found in STM32CubeIDE project

## Known Limitations

- None

## Development Toolchains and Compilers

-   IAR Embedded Workbench for ARM (EWARM) toolchain V8.50.9 + STLink-V3
-   MDK-ARM toolchain V5.32.0 + STLink-V3
-   STM32CubeIDE v1.6.1 + STLink-V3

## Supported Devices and Boards

- [STEVAL-STWINKT1](https://www.st.com/en/evaluation-tools/steval-stwinkt1.html)
- [STEVAL-STWINKT1B](https://www.st.com/en/evaluation-tools/steval-stwinkt1b.html)

## Backward Compatibility

- None

## Dependencies

- None


</div>
:::

::: {.collapse}
<input type="checkbox" id="collapse-section3" aria-hidden="true">
<label for="collapse-section3" aria-hidden="true">v1.1.0 / 29-Jan-2021</label>
<div>		

## Main Changes

### Maintenance release and product update

  - **Refactored usbd_wcid_interface.c**
  - **Updated HSD_USE_FAKE_DATA to HSD_USE_DUMMY_DATA**
  - **Setup automatic allocation of SdWriteBufferSize in base of the effective baud rate**
  - **Deleted refs to HSD_SD_LOGGING_MODE**
  - Moved sd_diskio from MW to User space
  - Deleted unused uuid_ble_service.h
  - Switched off orange led during USB streaming
  - Modified Attribute_Modified_CB to enable/disable BSP_BC_CmdSend only when needed
  - Minor in EXTI2_IRQHandler comment
  - Bug fixed for always-on HW TAG 1
  - Added a comment on ATT_MTU

## Known Limitations

- None

## Development Toolchains and Compilers

-   IAR Embedded Workbench for ARM (EWARM) toolchain V8.50.5 + STLink-V3
-   MDK-ARM toolchain V5.31.0 + STLink-V3
-   STM32CubeIDE v1.5.1 + STLink-V3

## Supported Devices and Boards

- [STEVAL-STWINKT1](https://www.st.com/en/evaluation-tools/steval-stwinkt1.html)
- [STEVAL-STWINKT1B](https://www.st.com/en/evaluation-tools/steval-stwinkt1b.html)

## Backward Compatibility

- None

## Dependencies

- None


</div>
:::

::: {.collapse}
<input type="checkbox" id="collapse-section2" aria-hidden="true">
<label for="collapse-section2" aria-hidden="true">v1.0.0 / 13-Nov-2020</label>
<div>		

## Main Changes

### First official release

- **Main features for HSDatalog example**: 
    - High-rate (up to 6 Mbit/s) data capture software suite
	- Compatible with [ST BLESensor app](https://www.st.com/en/embedded-software/stblesensor.html) for system setup and real-time control
    - Compatible with [UNICO](https://www.st.com/en/embedded-software/unico-gui.html) for Machine Learning Core available in ISM330DHCX component
    - Hardware and software labelling features
    - Timestamping technique for all sensors
	- FatFS third-party FAT file system module for small embedded systems
	- FreeRTOS third-party RTOS kernel for embedded devices

## Known Limitations

- None

## Development Toolchains and Compilers

-   IAR Embedded Workbench for ARM (EWARM) toolchain V8.50.5 + STLink-V3
-   RealView Microcontroller Development Kit (MDK-ARM) toolchain V5.31.0 + STLink-V3
-   STM32CubeIDE v1.4.2 + STLink-V3

## Supported Devices and Boards

- [STEVAL-STWINKT1](https://www.st.com/en/evaluation-tools/steval-stwinkt1.html)

## Backward Compatibility

- None

## Dependencies

- None


</div>
:::

:::
:::

<footer class="sticky">
::: {.columns}
::: {.column width="95%"}
For complete documentation on **STM32**
microcontrollers please visit: [www.st.com](https://www.st.com/en/microcontrollers-microprocessors.html)
:::
::: {.column width="5%"}
<abbr title="Based on template cx566953 version 2.0">Info</abbr>
:::
:::
</footer>
