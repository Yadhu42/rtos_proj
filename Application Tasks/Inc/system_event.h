/*
 * system_event.h
 *
 * Header files containing event group handle and bit definitions which can be expanded as needed
 */

#ifndef INC_SYSTEM_EVENT_H_
#define INC_SYSTEM_EVENT_H_

#include "FreeRTOS.h"
#include "event_groups.h"

extern EventGroupHandle_t system_event_group;

#define MODBUS_INITIALIZED_BIT  (1 << 0)
#define SENSORS_INITIALIZED_BIT (1 << 1)  //Further use example
#define OTHER_INITIALIZED_BIT   (1 << 2)  //Further use example


#endif /* INC_SYSTEM_EVENT_H_ */
