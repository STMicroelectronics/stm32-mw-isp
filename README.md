# STM32 ISP Library

version 1.0.0

The ISP Library middleware (running on the target) hosts 2A algorithms
(Auto Exposure and Auto White Balance) and mechanisms to control the
ISP and load sensor ISP tuning file.

The STM32 ISP Library also implements a communication mechanism with the
STM32 ISP IQTune desktop application that provide services to tune the
ISP present in STM32 devices.
To activate this communication through USB link, the compilation flag
ISP_MW_TUNING_TOOL_SUPPORT must be enabled.

## Structure
- isp: core of the ISP Library with the ISP parameter configuration
- isp_param_conf: collection of sensor tuning parameters
- evision: 2A algorithms that are delivered as binary

## Enhancements, new features
- Initial release

## Known Issues and Limitations
- In some situations, Auto White Balance (AWB) algorithm can flicker between 2 AWB profiles\*
<br>
\* Fix is under preparation

## STM32 ISP IQTune desktop application
<https://www.st.com/en/development-tools/stm32-isp-iqtune.html>

## STM32 ISP Wiki documentation
<https://wiki.st.com/stm32mcu/wiki/Category:ISP>

## STM32 ISP tuning procedure
<https://wiki.st.com/stm32mcu/wiki/ISP:How_to_tune_ISP_using_the_STM32_ISP_IQTune>
