/*! \file *********************************************************************
 *
 * \brief This file contains the default exception handlers.
 *
 * $asf_license$
 *
 * \par Purpose
 *
 * This file provides basic support for Cortex-M processor based
 * microcontrollers.
 *
 * \note
 * The exception handler has weak aliases.
 * As they are weak aliases, any function with the same name will override
 * this definition.
 *
 * \author               Atmel Corporation: http://www.atmel.com \n
 *                       Support and FAQ: http://support.atmel.no/
 *
 ******************************************************************************/

#include "exceptions.h"

/* @cond 0 */
/**INDENT-OFF**/
#ifdef __cplusplus
extern "C" {
#endif
/**INDENT-ON**/
/* @endcond */

#ifdef __GNUC__
/* Cortex-M3 core handlers */
extern void Reset_Handler( void ) __attribute__ ((weak, alias ("Dummy_Handler"))) ;
extern void NMI_Handler( void ) __attribute__ ((weak, alias ("Dummy_Handler"))) ;
extern void HardFault_Handler( void ) __attribute__ ((weak, alias ("Dummy_Handler"))) ;
extern void MemManage_Handler( void ) __attribute__ ((weak, alias ("Dummy_Handler"))) ;
extern void BusFault_Handler( void ) __attribute__ ((weak, alias ("Dummy_Handler"))) ;
extern void UsageFault_Handler( void ) __attribute__ ((weak, alias ("Dummy_Handler"))) ;
extern void SVC_Handler( void ) __attribute__ ((weak, alias ("Dummy_Handler"))) ;
extern void DebugMon_Handler( void ) __attribute__ ((weak, alias ("Dummy_Handler"))) ;
extern void PendSV_Handler( void ) __attribute__ ((weak, alias ("Dummy_Handler"))) ;
extern void SysTick_Handler( void ) __attribute__ ((weak, alias ("Dummy_Handler"))) ;

/* Peripherals handlers */
extern void SUPC_IrqHandler( void ) __attribute__ ((weak, alias ("Dummy_Handler"))) ;
extern void RSTC_IrqHandler( void ) __attribute__ ((weak, alias ("Dummy_Handler"))) ;
extern void RTC_IrqHandler( void ) __attribute__ ((weak, alias ("Dummy_Handler"))) ;
extern void RTT_IrqHandler( void ) __attribute__ ((weak, alias ("Dummy_Handler"))) ;
extern void WDT_IrqHandler( void ) __attribute__ ((weak, alias ("Dummy_Handler"))) ;
extern void PMC_IrqHandler( void ) __attribute__ ((weak, alias ("Dummy_Handler"))) ;
extern void EFC_IrqHandler( void ) __attribute__ ((weak, alias ("Dummy_Handler"))) ;
extern void UART0_IrqHandler( void ) __attribute__ ((weak, alias ("Dummy_Handler"))) ;
extern void UART1_IrqHandler( void ) __attribute__ ((weak, alias ("Dummy_Handler"))) ;
extern void PIOA_IrqHandler( void ) __attribute__ ((weak, alias ("Dummy_Handler"))) ;
extern void PIOB_IrqHandler( void ) __attribute__ ((weak, alias ("Dummy_Handler"))) ;
extern void PIOC_IrqHandler( void ) __attribute__ ((weak, alias ("Dummy_Handler"))) ;
extern void USART0_IrqHandler( void ) __attribute__ ((weak, alias ("Dummy_Handler"))) ;
extern void USART1_IrqHandler( void ) __attribute__ ((weak, alias ("Dummy_Handler"))) ;
extern void TWI0_IrqHandler( void ) __attribute__ ((weak, alias ("Dummy_Handler"))) ;
extern void TWI1_IrqHandler( void ) __attribute__ ((weak, alias ("Dummy_Handler"))) ;
extern void SPI_IrqHandler( void ) __attribute__ ((weak, alias ("Dummy_Handler"))) ;
extern void TC0_IrqHandler( void ) __attribute__ ((weak, alias ("Dummy_Handler"))) ;
extern void TC1_IrqHandler( void ) __attribute__ ((weak, alias ("Dummy_Handler"))) ;
extern void TC2_IrqHandler( void ) __attribute__ ((weak, alias ("Dummy_Handler"))) ;
extern void TC3_IrqHandler( void ) __attribute__ ((weak, alias ("Dummy_Handler"))) ;
extern void TC4_IrqHandler( void ) __attribute__ ((weak, alias ("Dummy_Handler"))) ;
extern void TC5_IrqHandler( void ) __attribute__ ((weak, alias ("Dummy_Handler"))) ;
extern void ADC_IrqHandler( void ) __attribute__ ((weak, alias ("Dummy_Handler"))) ;
extern void DACC_IrqHandler( void ) __attribute__ ((weak, alias ("Dummy_Handler"))) ;
extern void PWM_IrqHandler( void ) __attribute__ ((weak, alias ("Dummy_Handler"))) ;
#endif /* __GNUC__ */

#ifdef __ICCARM__
/* Cortex-M3 core handlers */
#pragma weak Reset_Handler=Dummy_Handler
#pragma weak NMI_Handler=Dummy_Handler
#pragma weak HardFault_Handler=Dummy_Handler
#pragma weak MemManage_Handler=Dummy_Handler
#pragma weak BusFault_Handler=Dummy_Handler
#pragma weak UsageFault_Handler=Dummy_Handler
#pragma weak SVC_Handler=Dummy_Handler
#pragma weak DebugMon_Handler=Dummy_Handler
#pragma weak PendSV_Handler=Dummy_Handler
#pragma weak SysTick_Handler=Dummy_Handler

/* Peripherals handlers */
#pragma weak SUPC_IrqHandler=Dummy_Handler
#pragma weak RSTC_IrqHandler=Dummy_Handler
#pragma weak RTC_IrqHandler=Dummy_Handler
#pragma weak RTT_IrqHandler=Dummy_Handler
#pragma weak WDT_IrqHandler=Dummy_Handler
#pragma weak PMC_IrqHandler=Dummy_Handler
#pragma weak EFC_IrqHandler=Dummy_Handler
#pragma weak UART0_IrqHandler=Dummy_Handler
#pragma weak UART1_IrqHandler=Dummy_Handler
#pragma weak PIOA_IrqHandler=Dummy_Handler
#pragma weak PIOB_IrqHandler=Dummy_Handler
#pragma weak PIOC_IrqHandler=Dummy_Handler
#pragma weak USART0_IrqHandler=Dummy_Handler
#pragma weak USART1_IrqHandler=Dummy_Handler
#pragma weak TWI0_IrqHandler=Dummy_Handler
#pragma weak TWI1_IrqHandler=Dummy_Handler
#pragma weak SPI_IrqHandler=Dummy_Handler
#pragma weak TC0_IrqHandler=Dummy_Handler
#pragma weak TC1_IrqHandler=Dummy_Handler
#pragma weak TC2_IrqHandler=Dummy_Handler
#pragma weak TC3_IrqHandler=Dummy_Handler
#pragma weak TC4_IrqHandler=Dummy_Handler
#pragma weak TC5_IrqHandler=Dummy_Handler
#pragma weak ADC_IrqHandler=Dummy_Handler
#pragma weak DACC_IrqHandler=Dummy_Handler
#pragma weak PWM_IrqHandler=Dummy_Handler
#endif /* __ICCARM__ */

/**
 * \brief Default interrupt handler for unused IRQs.
 */
void Dummy_Handler( void )
{
  while ( 1 ) {}
}

/* @cond 0 */
/**INDENT-OFF**/
#ifdef __cplusplus
}
#endif
/**INDENT-ON**/
/* @endcond */
