/*
 * sys_health_monitor.h
 *
 *Provides the interface for the System Health Monitor Task
 */

#ifndef INC_SYS_HEALTH_MONITOR_H_
#define INC_SYS_HEALTH_MONITOR_H_

#include <stdbool.h>
#include "FreeRTOSTasks.h"

/**
 * Temperature thresholds for analog watchdog
 */
#define ADC1_AWD_HT_TEMP_CELSIUS   80
#define ADC1_AWD_LT_TEMP_CELSIUS   -20

/**
 * Extern health flag for the sensors task
 * If you have other tasks that need monitoring, you can add other flags as necessary
 */
extern volatile bool g_sensors_task_ok;

/**
 * Starts the system health monitor task
 */
void sys_health_monitor_task_start(void);


#endif /* INC_SYS_HEALTH_MONITOR_H_ */
