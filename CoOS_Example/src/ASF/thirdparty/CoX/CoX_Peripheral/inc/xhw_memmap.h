//*****************************************************************************
//
//! \file xhw_memmap.h
//! \brief Macros defining the memory map of the MCU.
//! \version V2.1.1.0
//! \date 11/14/2011
//! \author CooCox
//! \copy
//!
//! Copyright (c)  2011, CooCox 
//! All rights reserved.
//! 
//! Redistribution and use in source and binary forms, with or without 
//! modification, are permitted provided that the following conditions 
//! are met: 
//! 
//!     * Redistributions of source code must retain the above copyright 
//! notice, this list of conditions and the following disclaimer. 
//!     * Redistributions in binary form must reproduce the above copyright
//! notice, this list of conditions and the following disclaimer in the
//! documentation and/or other materials provided with the distribution. 
//!     * Neither the name of the <ORGANIZATION> nor the names of its 
//! contributors may be used to endorse or promote products derived 
//! from this software without specific prior written permission. 
//! 
//! THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
//! AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE 
//! IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
//! ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE 
//! LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR 
//! CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF 
//! SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
//! INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN 
//! CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) 
//! ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF 
//! THE POSSIBILITY OF SUCH DAMAGE.
//
//*****************************************************************************

#ifndef __XHW_MEMMAP_H__
#define __XHW_MEMMAP_H__

//*****************************************************************************
//
//! \addtogroup CoX_Peripheral_Lib
//! @{
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup LowLayer
//! @{
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup xLowLayer
//! @{
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup xLowLayer_Peripheral_Memmap xLowLayer Peripheral Memmap
//! \brief The following are definitions for the base addresses of the memories
//! and peripherals.
//!
//! They are always used as ulBase parameters in the peripheral library.
//! The name of a macro for the base address of a peripheral is in  general
//! format as $Namen$_BASE, e.g. UART0_BASE.
//!
//! @{
//
//*****************************************************************************

#define xFLASH_BASE             0           // Flash memory
#define xSRAM_BASE              0x20000000  // SRAM memory
#define xWDT_BASE               0           // WatchDog
#define xGPIO_PORTA_BASE        PORTA_BASE 
#define xGPIO_PORTB_BASE        PORTB_BASE 
#define xUART0_BASE             SERCOM0_BASE // UART0
#define xUART1_BASE             SERCOM1_BASE // UART1
#define xUART2_BASE             SERCOM2_BASE // UART2
#define xUART3_BASE             SERCOM3_BASE // UART3
#define xUART4_BASE             SERCOM4_BASE // UART4
#define xUART5_BASE             SERCOM5_BASE // UART5
#define xTIMER0_BASE            0           // Timer0
#define xTIMER1_BASE            0           // Timer1
#define xSPI0_BASE              SERCOM0_BASE            // SPI0
#define xSPI1_BASE              SERCOM1_BASE            // SPI1
#define xSPI2_BASE              SERCOM2_BASE            // SPI0
#define xSPI3_BASE              SERCOM3_BASE            // SPI0
#define xSPI4_BASE              SERCOM4_BASE            // SPI0
#define xSPI5_BASE              SERCOM5_BASE           // SPI0
#define xI2C0_BASE              0           // I2C0 
#define xI2C1_BASE              0           // I2C1 
#define xADC0_BASE              0           // ADC
#define xACMP0_BASE             0           // ACMP
#define xPWMA_BASE              0           // PWMA
#define xPWMB_BASE              0           // PWMB

//*****************************************************************************
//
//! @}
//
//*****************************************************************************
#define PORTA_BASE				(0x41004400U) //PORTA //
#define PORTB_BASE				(0x41004480U) //PORTB //
#define SERCOM0_BASE			(0x42000800U) //SERCOM0 //
#define SERCOM1_BASE			(0x42000C00U) //SERCOM1 //
#define SERCOM2_BASE			(0x42001000U) //SERCOM2 //
#define SERCOM3_BASE			(0x42001400U) //SERCOM3 //
#define SERCOM4_BASE			(0x42001800U) //SERCOM4 //
#define SERCOM5_BASE			(0x42001C00U) //SERCOM5 //
//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
//! @}
//
//*****************************************************************************

#endif // __XHW_MEMMAP_H__


