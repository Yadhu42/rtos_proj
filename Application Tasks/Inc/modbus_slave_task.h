/*
 * modbus_slave_task.h
 *
 * Contains the necessary function prototype and definitions for the Modbus Slave task
 */

#ifndef INC_MODBUS_SLAVE_TASK_H_
#define INC_MODBUS_SLAVE_TASK_H_

#include "error.h"
#include "FreeRTOSTasks.h"
#include "queue.h"

/**
 * Enumeration of function code definitions
 */
typedef enum
{
  READ_COILS                = 0x01,
  READ_DISCRETE_INPUTS      = 0x02,
  READ_HOLDING_REGS         = 0x03,
  READ_INPUT_REGS           = 0x04,
  WRITE_SINGLE_REG          = 0x05,
  WRITE_HOLDING_REGS        = 0x06,
  WRITE_SINGLE_COIL         = 0x07,
  WRITE_MULTI_COILS         = 0x08,
}modbus_function_code_e ;

/**
 * Handle for the feedback queue used to retrieve the status of requests processed by the Modbus Data Manager
 */
extern QueueHandle_t modbus_feedback_queue_handle;

/**
 * Sends a task notification to the Modbus salve task from an ISR to signal
 * the receipt of a Modbus RTU frame (ex detected via UART IDLE line)
 * -param xHigherPriorityTaskWoken Pointer updated by the xTaskNotifyFromISR() to pdTRUE
 *        if sending the notification unblocks a higher priority task
 */
void modbus_slave_task_notification_from_isr(BaseType_t *xHigherPriorityTaskWoken);

/**
 * Starts the Modbus slave task and related resources
 */
void modbus_slave_task_start(void);


#endif /* INC_MODBUS_SLAVE_TASK_H_ */
