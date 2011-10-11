/* $asf_license$ */

#ifndef _SAM3X8G_
#define _SAM3X8G_

/** \addtogroup SAM3X8G_definitions SAM3X8G definitions
  This file defines all structures and symbols for SAM3X8G:
    - registers and bitfields
    - peripheral base address
    - peripheral ID
    - PIO definitions
*/
/*@{*/

#ifdef __cplusplus
 extern "C" {
#endif 

#ifndef __ASSEMBLY__
#include <stdint.h>
#ifndef __cplusplus
typedef volatile const uint32_t RoReg; /**< Read only 32-bit register (volatile const unsigned int) */
#else
typedef volatile       uint32_t RoReg; /**< Read only 32-bit register (volatile const unsigned int) */
#endif
typedef volatile       uint32_t WoReg; /**< Write only 32-bit register (volatile unsigned int) */
typedef volatile       uint32_t RwReg; /**< Read-Write 32-bit register (volatile unsigned int) */
#endif

/* ************************************************************************** */
/*   CMSIS DEFINITIONS FOR SAM3X8G */
/* ************************************************************************** */
/** \addtogroup SAM3X8G_cmsis CMSIS Definitions */
/*@{*/

/**< Interrupt Number Definition */
typedef enum IRQn
{
/******  Cortex-M3 Processor Exceptions Numbers ******************************/
  NonMaskableInt_IRQn   = -14, /**<  2 Non Maskable Interrupt                */
  MemoryManagement_IRQn = -12, /**<  4 Cortex-M3 Memory Management Interrupt */
  BusFault_IRQn         = -11, /**<  5 Cortex-M3 Bus Fault Interrupt         */
  UsageFault_IRQn       = -10, /**<  6 Cortex-M3 Usage Fault Interrupt       */
  SVCall_IRQn           = -5,  /**< 11 Cortex-M3 SV Call Interrupt           */
  DebugMonitor_IRQn     = -4,  /**< 12 Cortex-M3 Debug Monitor Interrupt     */
  PendSV_IRQn           = -2,  /**< 14 Cortex-M3 Pend SV Interrupt           */
  SysTick_IRQn          = -1,  /**< 15 Cortex-M3 System Tick Interrupt       */
/******  SAM3X8G specific Interrupt Numbers *********************************/
  
  SUPC_IRQn            =  0, /**<  0 SAM3X8G Supply Controller (SUPC) */
  RSTC_IRQn            =  1, /**<  1 SAM3X8G Reset Controller (RSTC) */
  RTC_IRQn             =  2, /**<  2 SAM3X8G Real Time Clock (RTC) */
  RTT_IRQn             =  3, /**<  3 SAM3X8G Real Time Timer (RTT) */
  WDT_IRQn             =  4, /**<  4 SAM3X8G Watchdog Timer (WDT) */
  PMC_IRQn             =  5, /**<  5 SAM3X8G Power Management Controller (PMC) */
  EFC0_IRQn            =  6, /**<  6 SAM3X8G Enhanced Flash Controller 0 (EFC0) */
  EFC1_IRQn            =  7, /**<  7 SAM3X8G Enhanced Flash Controller 1 (EFC1) */
  UART_IRQn            =  8, /**<  8 SAM3X8G Universal Asynchronous Receiver Transceiver (UART) */
  SMC_IRQn             =  9, /**<  9 SAM3X8G Static Memory Controller (SMC) */
  SDRAMC_IRQn          = 10, /**< 10 SAM3X8G Synchronous Dynamic RAM Controller (SDRAMC) */
  PIOA_IRQn            = 11, /**< 11 SAM3X8G Parallel I/O Controller A, (PIOA) */
  PIOB_IRQn            = 12, /**< 12 SAM3X8G Parallel I/O Controller B (PIOB) */
  PIOC_IRQn            = 13, /**< 13 SAM3X8G Parallel I/O Controller C (PIOC) */
  PIOD_IRQn            = 14, /**< 14 SAM3X8G Parallel I/O Controller D (PIOD) */
  PIOE_IRQn            = 15, /**< 15 SAM3X8G Parallel I/O Controller E (PIOE) */
  PIOF_IRQn            = 16, /**< 16 SAM3X8G Parallel I/O Controller F (PIOF) */
  USART0_IRQn          = 17, /**< 17 SAM3X8G USART 0 (USART0) */
  USART1_IRQn          = 18, /**< 18 SAM3X8G USART 1 (USART1) */
  USART2_IRQn          = 19, /**< 19 SAM3X8G USART 2 (USART2) */
  USART3_IRQn          = 20, /**< 20 SAM3X8G USART 3 (USART3) */
  HSMCI_IRQn           = 21, /**< 21 SAM3X8G Multimedia Card Interface (HSMCI) */
  TWI0_IRQn            = 22, /**< 22 SAM3X8G Two-Wire Interface 0 (TWI0) */
  TWI1_IRQn            = 23, /**< 23 SAM3X8G Two-Wire Interface 1 (TWI1) */
  SPI0_IRQn            = 24, /**< 24 SAM3X8G Serial Peripheral Interface (SPI0) */
  SPI1_IRQn            = 25, /**< 25 SAM3X8G Serial Peripheral Interface (SPI1) */
  SSC_IRQn             = 26, /**< 26 SAM3X8G Synchronous Serial Controller (SSC) */
  TC0_IRQn             = 27, /**< 27 SAM3X8G Timer Counter 0 (TC0) */
  TC1_IRQn             = 28, /**< 28 SAM3X8G Timer Counter 1 (TC1) */
  TC2_IRQn             = 29, /**< 29 SAM3X8G Timer Counter 2 (TC2) */
  TC3_IRQn             = 30, /**< 30 SAM3X8G Timer Counter 3 (TC3) */
  TC4_IRQn             = 31, /**< 31 SAM3X8G Timer Counter 4 (TC4) */
  TC5_IRQn             = 32, /**< 32 SAM3X8G Timer Counter 5 (TC5) */
  TC6_IRQn             = 33, /**< 33 SAM3X8G Timer Counter 6 (TC6) */
  TC7_IRQn             = 34, /**< 34 SAM3X8G Timer Counter 7 (TC7) */
  TC8_IRQn             = 35, /**< 35 SAM3X8G Timer Counter 8 (TC8) */
  PWM_IRQn             = 36, /**< 36 SAM3X8G Pulse Width Modulation Controller (PWM) */
  ADC_IRQn             = 37, /**< 37 SAM3X8G ADC Controller (ADC) */
  DACC_IRQn            = 38, /**< 38 SAM3X8G DAC Controller (DACC) */
  DMAC_IRQn            = 39, /**< 39 SAM3X8G DMA Controller (DMAC) */
  UOTGHS_IRQn          = 40, /**< 40 SAM3X8G USB OTG High Speed (UOTGHS) */
  TRNG_IRQn            = 41, /**< 41 SAM3X8G True Random Number Generator (TRNG) */
  EMAC_IRQn            = 42, /**< 42 SAM3X8G Ethernet MAC (EMAC) */
  CAN0_IRQn            = 43, /**< 43 SAM3X8G CAN Controller 0 (CAN0) */
  CAN1_IRQn            = 44  /**< 44 SAM3X8G CAN Controller 1 (CAN1) */
} IRQn_Type;

/**
 * \brief Configuration of the Cortex-M3 Processor and Core Peripherals 
 */

#define __CM3_REV              0x0200 /**< SAM3X8G core revision number ([15:8] revision number, [7:0] patch number) */
#define __MPU_PRESENT          1      /**< SAM3X8G does provide a MPU */
#define __NVIC_PRIO_BITS       4      /**< SAM3X8G uses 4 Bits for the Priority Levels */
#define __Vendor_SysTickConfig 0      /**< Set to 1 if different SysTick Config is used */

/*
 * \brief CMSIS includes
 */

#include <core_cm3.h>

/*@}*/

/* ************************************************************************** */
/**  SOFTWARE PERIPHERAL API DEFINITION FOR SAM3X8G */
/* ************************************************************************** */
/** \addtogroup SAM3X8G_api Peripheral Software API */
/*@{*/

#include "component/adc.h"
#include "component/can.h"
#include "component/chipid.h"
#include "component/dacc.h"
#include "component/dmac.h"
#include "component/efc.h"
#include "component/emac.h"
#include "component/gpbr.h"
#include "component/hsmci.h"
#include "component/matrix.h"
#include "component/pdc.h"
#include "component/pio.h"
#include "component/pmc.h"
#include "component/pwm.h"
#include "component/rstc.h"
#include "component/rtc.h"
#include "component/rtt.h"
#include "component/sdramc.h"
#include "component/smc.h"
#include "component/spi.h"
#include "component/ssc.h"
#include "component/supc.h"
#include "component/tc.h"
#include "component/trng.h"
#include "component/twi.h"
#include "component/uart.h"
#include "component/uotghs.h"
#include "component/usart.h"
#include "component/wdt.h"
/*@}*/

/* ************************************************************************** */
/*   REGISTER ACCESS DEFINITIONS FOR SAM3X8G */
/* ************************************************************************** */
/** \addtogroup SAM3X8G_reg Registers Access Definitions */
/*@{*/

#include "instance/hsmci.h"
#include "instance/ssc.h"
#include "instance/spi0.h"
#include "instance/spi1.h"
#include "instance/tc0.h"
#include "instance/tc1.h"
#include "instance/tc2.h"
#include "instance/twi0.h"
#include "instance/twi1.h"
#include "instance/pwm.h"
#include "instance/usart0.h"
#include "instance/usart1.h"
#include "instance/usart2.h"
#include "instance/usart3.h"
#include "instance/uotghs.h"
#include "instance/emac.h"
#include "instance/can0.h"
#include "instance/can1.h"
#include "instance/trng.h"
#include "instance/adc.h"
#include "instance/dmac.h"
#include "instance/dacc.h"
#include "instance/smc.h"
#include "instance/sdramc.h"
#include "instance/matrix.h"
#include "instance/pmc.h"
#include "instance/uart.h"
#include "instance/chipid.h"
#include "instance/efc0.h"
#include "instance/efc1.h"
#include "instance/pioa.h"
#include "instance/piob.h"
#include "instance/pioc.h"
#include "instance/piod.h"
#include "instance/pioe.h"
#include "instance/piof.h"
#include "instance/rstc.h"
#include "instance/supc.h"
#include "instance/rtt.h"
#include "instance/wdt.h"
#include "instance/rtc.h"
#include "instance/gpbr.h"
/*@}*/

/* ************************************************************************** */
/*   PERIPHERAL ID DEFINITIONS FOR SAM3X8G */
/* ************************************************************************** */
/** \addtogroup SAM3X8G_id Peripheral Ids Definitions */
/*@{*/

#define ID_SUPC   ( 0) /**< \brief Supply Controller (SUPC) */
#define ID_RSTC   ( 1) /**< \brief Reset Controller (RSTC) */
#define ID_RTC    ( 2) /**< \brief Real Time Clock (RTC) */
#define ID_RTT    ( 3) /**< \brief Real Time Timer (RTT) */
#define ID_WDT    ( 4) /**< \brief Watchdog Timer (WDT) */
#define ID_PMC    ( 5) /**< \brief Power Management Controller (PMC) */
#define ID_EFC0   ( 6) /**< \brief Enhanced Flash Controller 0 (EFC0) */
#define ID_EFC1   ( 7) /**< \brief Enhanced Flash Controller 1 (EFC1) */
#define ID_UART   ( 8) /**< \brief Universal Asynchronous Receiver Transceiver (UART) */
#define ID_SMC    ( 9) /**< \brief Static Memory Controller (SMC) */
#define ID_SDRAMC (10) /**< \brief Synchronous Dynamic RAM Controller (SDRAMC) */
#define ID_PIOA   (11) /**< \brief Parallel I/O Controller A, (PIOA) */
#define ID_PIOB   (12) /**< \brief Parallel I/O Controller B (PIOB) */
#define ID_PIOC   (13) /**< \brief Parallel I/O Controller C (PIOC) */
#define ID_PIOD   (14) /**< \brief Parallel I/O Controller D (PIOD) */
#define ID_PIOE   (15) /**< \brief Parallel I/O Controller E (PIOE) */
#define ID_PIOF   (16) /**< \brief Parallel I/O Controller F (PIOF) */
#define ID_USART0 (17) /**< \brief USART 0 (USART0) */
#define ID_USART1 (18) /**< \brief USART 1 (USART1) */
#define ID_USART2 (19) /**< \brief USART 2 (USART2) */
#define ID_USART3 (20) /**< \brief USART 3 (USART3) */
#define ID_HSMCI  (21) /**< \brief Multimedia Card Interface (HSMCI) */
#define ID_TWI0   (22) /**< \brief Two-Wire Interface 0 (TWI0) */
#define ID_TWI1   (23) /**< \brief Two-Wire Interface 1 (TWI1) */
#define ID_SPI0   (24) /**< \brief Serial Peripheral Interface (SPI0) */
#define ID_SPI1   (25) /**< \brief Serial Peripheral Interface (SPI1) */
#define ID_SSC    (26) /**< \brief Synchronous Serial Controller (SSC) */
#define ID_TC0    (27) /**< \brief Timer Counter 0 (TC0) */
#define ID_TC1    (28) /**< \brief Timer Counter 1 (TC1) */
#define ID_TC2    (29) /**< \brief Timer Counter 2 (TC2) */
#define ID_TC3    (30) /**< \brief Timer Counter 3 (TC3) */
#define ID_TC4    (31) /**< \brief Timer Counter 4 (TC4) */
#define ID_TC5    (32) /**< \brief Timer Counter 5 (TC5) */
#define ID_TC6    (33) /**< \brief Timer Counter 6 (TC6) */
#define ID_TC7    (34) /**< \brief Timer Counter 7 (TC7) */
#define ID_TC8    (35) /**< \brief Timer Counter 8 (TC8) */
#define ID_PWM    (36) /**< \brief Pulse Width Modulation Controller (PWM) */
#define ID_ADC    (37) /**< \brief ADC Controller (ADC) */
#define ID_DACC   (38) /**< \brief DAC Controller (DACC) */
#define ID_DMAC   (39) /**< \brief DMA Controller (DMAC) */
#define ID_UOTGHS (40) /**< \brief USB OTG High Speed (UOTGHS) */
#define ID_TRNG   (41) /**< \brief True Random Number Generator (TRNG) */
#define ID_EMAC   (42) /**< \brief Ethernet MAC (EMAC) */
#define ID_CAN0   (43) /**< \brief CAN Controller 0 (CAN0) */
#define ID_CAN1   (44) /**< \brief CAN Controller 1 (CAN1) */
/*@}*/

/* ************************************************************************** */
/*   BASE ADDRESS DEFINITIONS FOR SAM3X8G */
/* ************************************************************************** */
/** \addtogroup SAM3X8G_base Peripheral Base Address Definitions */
/*@{*/

#ifdef __ASSEMBLY__
#define HSMCI      (0x40000000U) /**< \brief (HSMCI     ) Base Address */
#define SSC        (0x40004000U) /**< \brief (SSC       ) Base Address */
#define SPI0       (0x40008000U) /**< \brief (SPI0      ) Base Address */
#define SPI1       (0x4000C000U) /**< \brief (SPI1      ) Base Address */
#define TC0        (0x40080000U) /**< \brief (TC0       ) Base Address */
#define TC1        (0x40084000U) /**< \brief (TC1       ) Base Address */
#define TC2        (0x40088000U) /**< \brief (TC2       ) Base Address */
#define TWI0       (0x4008C000U) /**< \brief (TWI0      ) Base Address */
#define PDC_TWI0   (0x4008C100U) /**< \brief (PDC_TWI0  ) Base Address */
#define TWI1       (0x40090000U) /**< \brief (TWI1      ) Base Address */
#define PDC_TWI1   (0x40090100U) /**< \brief (PDC_TWI1  ) Base Address */
#define PWM        (0x40094000U) /**< \brief (PWM       ) Base Address */
#define PDC_PWM    (0x40094100U) /**< \brief (PDC_PWM   ) Base Address */
#define USART0     (0x40098000U) /**< \brief (USART0    ) Base Address */
#define PDC_USART0 (0x40098100U) /**< \brief (PDC_USART0) Base Address */
#define USART1     (0x4009C000U) /**< \brief (USART1    ) Base Address */
#define PDC_USART1 (0x4009C100U) /**< \brief (PDC_USART1) Base Address */
#define USART2     (0x400A0000U) /**< \brief (USART2    ) Base Address */
#define PDC_USART2 (0x400A0100U) /**< \brief (PDC_USART2) Base Address */
#define USART3     (0x400A4000U) /**< \brief (USART3    ) Base Address */
#define PDC_USART3 (0x400A4100U) /**< \brief (PDC_USART3) Base Address */
#define UOTGHS     (0x400AC000U) /**< \brief (UOTGHS    ) Base Address */
#define EMAC       (0x400B0000U) /**< \brief (EMAC      ) Base Address */
#define CAN0       (0x400B4000U) /**< \brief (CAN0      ) Base Address */
#define CAN1       (0x400B8000U) /**< \brief (CAN1      ) Base Address */
#define TRNG       (0x400BC000U) /**< \brief (TRNG      ) Base Address */
#define ADC        (0x400C0000U) /**< \brief (ADC       ) Base Address */
#define PDC_ADC    (0x400C0100U) /**< \brief (PDC_ADC   ) Base Address */
#define DMAC       (0x400C4000U) /**< \brief (DMAC      ) Base Address */
#define DACC       (0x400C8000U) /**< \brief (DACC      ) Base Address */
#define PDC_DACC   (0x400C8100U) /**< \brief (PDC_DACC  ) Base Address */
#define SMC        (0x400E0000U) /**< \brief (SMC       ) Base Address */
#define SDRAMC     (0x400E0200U) /**< \brief (SDRAMC    ) Base Address */
#define MATRIX     (0x400E0400U) /**< \brief (MATRIX    ) Base Address */
#define PMC        (0x400E0600U) /**< \brief (PMC       ) Base Address */
#define UART       (0x400E0800U) /**< \brief (UART      ) Base Address */
#define PDC_UART   (0x400E0900U) /**< \brief (PDC_UART  ) Base Address */
#define CHIPID     (0x400E0940U) /**< \brief (CHIPID    ) Base Address */
#define EFC0       (0x400E0A00U) /**< \brief (EFC0      ) Base Address */
#define EFC1       (0x400E0C00U) /**< \brief (EFC1      ) Base Address */
#define PIOA       (0x400E0E00U) /**< \brief (PIOA      ) Base Address */
#define PIOB       (0x400E1000U) /**< \brief (PIOB      ) Base Address */
#define PIOC       (0x400E1200U) /**< \brief (PIOC      ) Base Address */
#define PIOD       (0x400E1400U) /**< \brief (PIOD      ) Base Address */
#define PIOE       (0x400E1600U) /**< \brief (PIOE      ) Base Address */
#define PIOF       (0x400E1800U) /**< \brief (PIOF      ) Base Address */
#define RSTC       (0x400E1A00U) /**< \brief (RSTC      ) Base Address */
#define SUPC       (0x400E1A10U) /**< \brief (SUPC      ) Base Address */
#define RTT        (0x400E1A30U) /**< \brief (RTT       ) Base Address */
#define WDT        (0x400E1A50U) /**< \brief (WDT       ) Base Address */
#define RTC        (0x400E1A60U) /**< \brief (RTC       ) Base Address */
#define GPBR       (0x400E1A90U) /**< \brief (GPBR      ) Base Address */
#else
#define HSMCI      ((Hsmci  *)0x40000000U) /**< \brief (HSMCI     ) Base Address */
#define SSC        ((Ssc    *)0x40004000U) /**< \brief (SSC       ) Base Address */
#define SPI0       ((Spi    *)0x40008000U) /**< \brief (SPI0      ) Base Address */
#define SPI1       ((Spi    *)0x4000C000U) /**< \brief (SPI1      ) Base Address */
#define TC0        ((Tc     *)0x40080000U) /**< \brief (TC0       ) Base Address */
#define TC1        ((Tc     *)0x40084000U) /**< \brief (TC1       ) Base Address */
#define TC2        ((Tc     *)0x40088000U) /**< \brief (TC2       ) Base Address */
#define TWI0       ((Twi    *)0x4008C000U) /**< \brief (TWI0      ) Base Address */
#define PDC_TWI0   ((Pdc    *)0x4008C100U) /**< \brief (PDC_TWI0  ) Base Address */
#define TWI1       ((Twi    *)0x40090000U) /**< \brief (TWI1      ) Base Address */
#define PDC_TWI1   ((Pdc    *)0x40090100U) /**< \brief (PDC_TWI1  ) Base Address */
#define PWM        ((Pwm    *)0x40094000U) /**< \brief (PWM       ) Base Address */
#define PDC_PWM    ((Pdc    *)0x40094100U) /**< \brief (PDC_PWM   ) Base Address */
#define USART0     ((Usart  *)0x40098000U) /**< \brief (USART0    ) Base Address */
#define PDC_USART0 ((Pdc    *)0x40098100U) /**< \brief (PDC_USART0) Base Address */
#define USART1     ((Usart  *)0x4009C000U) /**< \brief (USART1    ) Base Address */
#define PDC_USART1 ((Pdc    *)0x4009C100U) /**< \brief (PDC_USART1) Base Address */
#define USART2     ((Usart  *)0x400A0000U) /**< \brief (USART2    ) Base Address */
#define PDC_USART2 ((Pdc    *)0x400A0100U) /**< \brief (PDC_USART2) Base Address */
#define USART3     ((Usart  *)0x400A4000U) /**< \brief (USART3    ) Base Address */
#define PDC_USART3 ((Pdc    *)0x400A4100U) /**< \brief (PDC_USART3) Base Address */
#define UOTGHS     ((Uotghs *)0x400AC000U) /**< \brief (UOTGHS    ) Base Address */
#define EMAC       ((Emac   *)0x400B0000U) /**< \brief (EMAC      ) Base Address */
#define CAN0       ((Can    *)0x400B4000U) /**< \brief (CAN0      ) Base Address */
#define CAN1       ((Can    *)0x400B8000U) /**< \brief (CAN1      ) Base Address */
#define TRNG       ((Trng   *)0x400BC000U) /**< \brief (TRNG      ) Base Address */
#define ADC        ((Adc    *)0x400C0000U) /**< \brief (ADC       ) Base Address */
#define PDC_ADC    ((Pdc    *)0x400C0100U) /**< \brief (PDC_ADC   ) Base Address */
#define DMAC       ((Dmac   *)0x400C4000U) /**< \brief (DMAC      ) Base Address */
#define DACC       ((Dacc   *)0x400C8000U) /**< \brief (DACC      ) Base Address */
#define PDC_DACC   ((Pdc    *)0x400C8100U) /**< \brief (PDC_DACC  ) Base Address */
#define SMC        ((Smc    *)0x400E0000U) /**< \brief (SMC       ) Base Address */
#define SDRAMC     ((Sdramc *)0x400E0200U) /**< \brief (SDRAMC    ) Base Address */
#define MATRIX     ((Matrix *)0x400E0400U) /**< \brief (MATRIX    ) Base Address */
#define PMC        ((Pmc    *)0x400E0600U) /**< \brief (PMC       ) Base Address */
#define UART       ((Uart   *)0x400E0800U) /**< \brief (UART      ) Base Address */
#define PDC_UART   ((Pdc    *)0x400E0900U) /**< \brief (PDC_UART  ) Base Address */
#define CHIPID     ((Chipid *)0x400E0940U) /**< \brief (CHIPID    ) Base Address */
#define EFC0       ((Efc    *)0x400E0A00U) /**< \brief (EFC0      ) Base Address */
#define EFC1       ((Efc    *)0x400E0C00U) /**< \brief (EFC1      ) Base Address */
#define PIOA       ((Pio    *)0x400E0E00U) /**< \brief (PIOA      ) Base Address */
#define PIOB       ((Pio    *)0x400E1000U) /**< \brief (PIOB      ) Base Address */
#define PIOC       ((Pio    *)0x400E1200U) /**< \brief (PIOC      ) Base Address */
#define PIOD       ((Pio    *)0x400E1400U) /**< \brief (PIOD      ) Base Address */
#define PIOE       ((Pio    *)0x400E1600U) /**< \brief (PIOE      ) Base Address */
#define PIOF       ((Pio    *)0x400E1800U) /**< \brief (PIOF      ) Base Address */
#define RSTC       ((Rstc   *)0x400E1A00U) /**< \brief (RSTC      ) Base Address */
#define SUPC       ((Supc   *)0x400E1A10U) /**< \brief (SUPC      ) Base Address */
#define RTT        ((Rtt    *)0x400E1A30U) /**< \brief (RTT       ) Base Address */
#define WDT        ((Wdt    *)0x400E1A50U) /**< \brief (WDT       ) Base Address */
#define RTC        ((Rtc    *)0x400E1A60U) /**< \brief (RTC       ) Base Address */
#define GPBR       ((Gpbr   *)0x400E1A90U) /**< \brief (GPBR      ) Base Address */
#endif /* __ASSEMBLY__ */
/*@}*/

/* ************************************************************************** */
/*   PIO DEFINITIONS FOR SAM3X8G */
/* ************************************************************************** */
/** \addtogroup SAM3X8G_pio Peripheral Pio Definitions */
/*@{*/

#include "pio/sam3x8g.h"
/*@}*/

/* ************************************************************************** */
/*   MEMORY MAPPING DEFINITIONS FOR SAM3X8G */
/* ************************************************************************** */

#define IFLASH0_SIZE             (0x40000u)
#define IFLASH0_PAGE_SIZE        (256u)
#define IFLASH0_LOCK_REGION_SIZE (16384u)
#define IFLASH0_NB_OF_PAGES      (1024u)
#define IFLASH1_SIZE             (0x40000u)
#define IFLASH1_PAGE_SIZE        (256u)
#define IFLASH1_LOCK_REGION_SIZE (16384u)
#define IFLASH1_NB_OF_PAGES      (1024u)
#define IRAM0_SIZE               (0x10000u)
#define IRAM1_SIZE               (0x8000u)
#define NFCRAM_SIZE              (0x1000u)
#define IFLASH_SIZE              (0x80000u)
#define IRAM_SIZE                (0x18000u)

#define IFLASH0_ADDR    (0x00080000u) /**< Internal Flash 0 base address */
#if defined IFLASH0_SIZE
#define IFLASH1_ADDR    (IFLASH0_ADDR+IFLASH0_SIZE) /**< Internal Flash 1 base address */
#endif
#define IROM_ADDR       (0x00100000u) /**< Internal ROM base address */
#define IRAM0_ADDR      (0x20000000u) /**< Internal RAM 0 base address */
#define IRAM1_ADDR      (0x20080000u) /**< Internal RAM 1 base address */
#define NFC_RAM_ADDR    (0x20100000u) /**< NAND Flash Controller RAM base address */
#define UOTGHS_RAM_ADDR (0x20180000u) /**< USB On-The-Go Interface RAM base address */
#define EBI_CS0_ADDR    (0x60000000u) /**< EBI Chip Select 0 base address */
#define EBI_CS1_ADDR    (0x61000000u) /**< EBI Chip Select 1 base address */
#define EBI_CS2_ADDR    (0x62000000u) /**< EBI Chip Select 2 base address */
#define EBI_CS3_ADDR    (0x63000000u) /**< EBI Chip Select 3 base address */
#define EBI_CS4_ADDR    (0x64000000u) /**< EBI Chip Select 4 base address */
#define EBI_CS5_ADDR    (0x65000000u) /**< EBI Chip Select 5 base address */
#define EBI_CS6_ADDR    (0x66000000u) /**< EBI Chip Select 6 base address */
#define EBI_CS7_ADDR    (0x67000000u) /**< EBI Chip Select 7 base address */

#ifdef __cplusplus
}
#endif

/*@}*/

#endif /* _SAM3X8G_ */
