/*
 * irq.h
 *
 * Contains IRQ priority definitions and initialization function prototype.
 */

#ifndef INC_IRQ_H_
#define INC_IRQ_H_

#include "mcu.h"
#include "FreeRTOSConfig.h"

// ADC interrupt priority, critical for temperature sensing
#define IRQ_ADC_PRIORITY        ((uint32_t) (configLIBRARY_MAX_SYSCALL_INTERRUPT_PRIORITY + 0))

//External Interrupt priority for user button
#define IRQ_EXTI15_10_PRIORITY  ((uint32_t) (configLIBRARY_MAX_SYSCALL_INTERRUPT_PRIORITY + 0))

//I2C event and timer interrupt priority for the Sensirion sensor operations
#define IRQ_I2C1_EV_PRIORITY    ((uint32_t) (configLIBRARY_MAX_SYSCALL_INTERRUPT_PRIORITY + 1))
#define IRQ_I2C1_TIM5_PRIORITY  ((uint32_t) (configLIBRARY_MAX_SYSCALL_INTERRUPT_PRIORITY + 2))

//USART2 interrupt priority for Modbus Operations
#define IRQ_USART2_PRIORITY     ((uint32_t) (configLIBRARY_MAX_SYSCALL_INTERRUPT_PRIORITY + 4))

// SP1 interrupt priority for FRAM operations, critical for data storage/retrieval
#define IRQ_SP1_PRIORITY        ((uint32_t) (configLIBRARY_MAX_SYSCALL_INTERRUPT_PRIORITY + 3))

// DMA stream priorities for SP1, used for efficient data transfer with FRAM
#define IRQ_DMA2_STREAM2_PRIORITY ((uint32_t) (configLIBRARY_MAX_SYSCALL_INTERRUPT_PRIORITY + 4))
#define IRQ_DMA2_STREAM3_PRIORITY  ((uint32_t) (configLIBRARY_MAX_SYSCALL_INTERRUPT_PRIORITY + 4))
/**
 *  Configures the priority levels for various IRQs in the system by setting the priority
 *  levels in the NVIC (Nested Vectored Interrupt Controller) for specific interrupts
 */
void irq_set_priorities(void);

#endif /* INC_IRQ_H_ */
