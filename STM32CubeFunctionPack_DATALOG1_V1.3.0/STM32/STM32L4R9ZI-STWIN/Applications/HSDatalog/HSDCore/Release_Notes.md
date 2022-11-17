---
pagetitle: Release Notes for High-Speed DataLog Core 
lang: en 
header-includes: <link rel="icon" type="image/x-icon" href="_htmresc/favicon.png" />
---

::: {.row}
::: {.col-sm-12 .col-lg-4}

<center> 
# Release Notes for <mark>High-Speed DataLog Core</mark> 
Copyright &copy; 2021 STMicroelectronics
    
[![ST logo](_htmresc/st_logo_2020.png)](https://www.st.com){.logo}
</center>

# License

This software package is licensed by ST under ST license SLA0094, the "License"; You may not use this component except in compliance with the License. You may obtain a copy of the License at:

[http://www.st.com/SLA0094](http://www.st.com/SLA0094)

# Purpose
The High-Speed DataLog Core application module (HSDCore) manages all sensors configured at their maximum sampling rate.

:::

::: {.col-sm-12 .col-lg-8}
# Update history

::: {.collapse} 
<input type="checkbox" id="collapse-section7" checked area-hidden="true">
<label for="collapse-section7" area-hidden="true">__v1.3.0 / 5-Nov-2021__</label>
<div>			

## Main Changes

### Maintenance and patch release

- Redesigned ODR and samplesPerTimestamp settings for HTS221 and LPS22HH: avoid misalignment between JSON configuration and effective sensor configuration
- Fixed samplesPerTimestamp calculation for ISM330DHCX MLC subsensor
- Added end_time and start_time fields in AcquisitionInfo.json
- Avoid to save unwanted HW_tags initial state in AcquisitionInfo.json
- Updated FIFO read command for IIS3DWB

</div>
:::

::: {.collapse} 
<input type="checkbox" id="collapse-section6" area-hidden="true">
<label for="collapse-section6" area-hidden="true">__v1.2.0 / 25-Jun-2021__</label>
<div>			

## Main Changes

### Maintenance and patch release

- **Enabled dynamic ODR selection for both microphones IMP23ABSU and IMP23DT05**
- **Issue solved: recalculate right sensitivity after changing FS in "XXX_Create_Sensor"**
- **Issue solved in parse_Status_from_JSON: avoid parsing ucfStatus**
- **Bug fixed in HTS221 and LPS22HH: use the same ODR for both subsensors also at the startup**
- Aligned hts221_app and iis2mdc_app to the latest drivers available
- Code cleaning

</div>
:::

::: {.collapse} 
<input type="checkbox" id="collapse-section5" area-hidden="true">
<label for="collapse-section5" area-hidden="true">__v1.1.0 / 29-January-2021__</label>
<div>			

## Main Changes

### Maintenance release and product update

- **Complete refactoring of ism330dhcx_app.c to better handle MLC use cases**
- **Updated HSD_USE_FAKE_DATA to HSD_USE_DUMMY_DATA**
- **Aligned mic gain to X-CUBE-MEMSMIC1**
- Added "batteryState" field in Performance Status JSON
- Added COM_GetnBytesPerSample function in com_manager
- Move sensor osThreadSuspend from OS_Init to thread
- Deleted refs to HS_SD_LOGGING_MODE
- Code cleaning

</div>
:::

::: {.collapse}
<input type="checkbox" id="collapse-section4" area-hidden="true">
<label for="collapse-section4" area-hidden="true">__v1.0.2 / 13-November-2020__</label>
<div>			

## Main Changes

### Patch release

- Bug fixed in create_JSON_DeviceInfo
- Code cleaning and compilation warnings solved

</div>
:::

::: {.collapse}
<input type="checkbox" id="collapse-section3" area-hidden="true">
<label for="collapse-section3" area-hidden="true">__v1.0.1 / 23-October-2020__</label>
<div>			

## Main Changes

### Patch release

- Parsed missing tagList section in parse_Device_from_JSON 

</div>
:::

::: {.collapse}
<input type="checkbox" id="collapse-section2" area-hidden="true">
<label for="collapse-section2" area-hidden="true">__v1.0.0 / 14-October-2020__</label>
<div>			

## Main Changes

### First official release

- Manages the nine ST sensors present on STWIN 

</div>
:::

:::
:::

<footer class="sticky">
::: {.columns}
::: {.column width="95%"}
For complete documentation on **STM32 Microcontrollers** ,
visit: [www.st.com](http://www.st.com/STM32)
:::
::: {.column width="5%"}
<abbr title="Based on template cx566953 version 2.0">Info</abbr>
:::
:::
</footer>
