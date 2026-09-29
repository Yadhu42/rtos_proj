/*
 * button.h
 *
 * Interface for initializing and managing the Nucleo board USER button for IWDG acknowledgements
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include <stdint.h>

/**
 * Time interval in milliseconds for LED blinking while waiting for button acknowledgement
 */
#define BUTTON_ACK_BLINK_INTERVAL   ((uint32_t) 500)

/**
 * Sets up the semaphore and configures the external interrupts for the Nucleo Board USER Button
 */
void button_init(void);

/**
 * Handles an Independent Watchdog (IWDG) reset event
 * Checks for event, requires user acknowledgment through button press, and clears the IWDG flags
 */
void button_check_and_acknowledge_iwdg_event(void);

#endif /* INC_BUTTON_H_ */
