SET PATH=C:\Keil_v5\ARM\ARMCC\Bin;D:\Program Files\STM32Cube\;C:\Program Files (x86)\Common Files\Oracle\Java\javapath;D:\CTEX\UserData\miktex\bin;D:\CTEX\MiKTeX\miktex\bin;D:\CTEX\CTeX\ctex\bin;D:\CTEX\CTeX\cct\bin;D:\CTEX\CTeX\ty\bin;D:\CTEX\Ghostscript\gs9.05\bin;D:\CTEX\GSview\gsview;D:\CTEX\WinEdt;d:\Program Files\Git\cmd;C:\Users\QY\AppData\Local\Microsoft\WindowsApps;;C:\altera\13.0\modelsim_ase\win32aloem;C:\Program Files\Bandizip\;C:\Program Files\Java\jre1.8.0_181\bin
SET ARMCC5_ASMOPT=--diag_suppress=9931
SET ARMCC5_CCOPT=--diag_suppress=9931
SET ARMCC5_LINKOPT=--diag_suppress=9931
SET CPU_TYPE=STM32F373CCTx
SET CPU_VENDOR=STMicroelectronics
SET UV2_TARGET=Communication
SET CPU_CLOCK=0x044AA200
"C:\Keil_v5\ARM\ARMCC\Bin\ArmAsm" --Via "communication\startup_stm32f373xc._ia"
"C:\Keil_v5\ARM\ARMCC\Bin\ArmCC" --Via "communication\main.__i"
"C:\Keil_v5\ARM\ARMCC\Bin\ArmCC" --Via "communication\gpio.__i"
"C:\Keil_v5\ARM\ARMCC\Bin\ArmCC" --Via "communication\dac.__i"
"C:\Keil_v5\ARM\ARMCC\Bin\ArmCC" --Via "communication\dma.__i"
"C:\Keil_v5\ARM\ARMCC\Bin\ArmCC" --Via "communication\sdadc.__i"
"C:\Keil_v5\ARM\ARMCC\Bin\ArmCC" --Via "communication\spi.__i"
"C:\Keil_v5\ARM\ARMCC\Bin\ArmCC" --Via "communication\usart.__i"
"C:\Keil_v5\ARM\ARMCC\Bin\ArmCC" --Via "communication\stm32f3xx_it.__i"
"C:\Keil_v5\ARM\ARMCC\Bin\ArmCC" --Via "communication\stm32f3xx_hal_msp.__i"
"C:\Keil_v5\ARM\ARMCC\Bin\ArmCC" --Via "communication\stm32f3xx_hal_dac.__i"
"C:\Keil_v5\ARM\ARMCC\Bin\ArmCC" --Via "communication\stm32f3xx_hal_dac_ex.__i"
"C:\Keil_v5\ARM\ARMCC\Bin\ArmCC" --Via "communication\stm32f3xx_hal_sdadc.__i"
"C:\Keil_v5\ARM\ARMCC\Bin\ArmCC" --Via "communication\stm32f3xx_hal_spi.__i"
"C:\Keil_v5\ARM\ARMCC\Bin\ArmCC" --Via "communication\stm32f3xx_hal_spi_ex.__i"
"C:\Keil_v5\ARM\ARMCC\Bin\ArmCC" --Via "communication\stm32f3xx_hal_tim.__i"
"C:\Keil_v5\ARM\ARMCC\Bin\ArmCC" --Via "communication\stm32f3xx_hal_tim_ex.__i"
"C:\Keil_v5\ARM\ARMCC\Bin\ArmCC" --Via "communication\stm32f3xx_hal_uart.__i"
"C:\Keil_v5\ARM\ARMCC\Bin\ArmCC" --Via "communication\stm32f3xx_hal_uart_ex.__i"
"C:\Keil_v5\ARM\ARMCC\Bin\ArmCC" --Via "communication\stm32f3xx_hal.__i"
"C:\Keil_v5\ARM\ARMCC\Bin\ArmCC" --Via "communication\stm32f3xx_hal_rcc.__i"
"C:\Keil_v5\ARM\ARMCC\Bin\ArmCC" --Via "communication\stm32f3xx_hal_rcc_ex.__i"
"C:\Keil_v5\ARM\ARMCC\Bin\ArmCC" --Via "communication\stm32f3xx_hal_gpio.__i"
"C:\Keil_v5\ARM\ARMCC\Bin\ArmCC" --Via "communication\stm32f3xx_hal_dma.__i"
"C:\Keil_v5\ARM\ARMCC\Bin\ArmCC" --Via "communication\stm32f3xx_hal_cortex.__i"
"C:\Keil_v5\ARM\ARMCC\Bin\ArmCC" --Via "communication\stm32f3xx_hal_pwr.__i"
"C:\Keil_v5\ARM\ARMCC\Bin\ArmCC" --Via "communication\stm32f3xx_hal_pwr_ex.__i"
"C:\Keil_v5\ARM\ARMCC\Bin\ArmCC" --Via "communication\stm32f3xx_hal_flash.__i"
"C:\Keil_v5\ARM\ARMCC\Bin\ArmCC" --Via "communication\stm32f3xx_hal_flash_ex.__i"
"C:\Keil_v5\ARM\ARMCC\Bin\ArmCC" --Via "communication\stm32f3xx_hal_i2c.__i"
"C:\Keil_v5\ARM\ARMCC\Bin\ArmCC" --Via "communication\stm32f3xx_hal_i2c_ex.__i"
"C:\Keil_v5\ARM\ARMCC\Bin\ArmCC" --Via "communication\system_stm32f3xx.__i"
"C:\Keil_v5\ARM\ARMCC\Bin\ArmLink" --Via "Communication\Communication.lnp"
"C:\Keil_v5\ARM\ARMCC\Bin\fromelf.exe" "Communication\Communication.axf" --i32combined --output "Communication\Communication.hex"
