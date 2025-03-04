#ifndef CAR_AT_ENTRANCE_H
#define CAR_AT_ENTRANCE_H

#include "mbed.h"

// Light sensor configuration
#define NIGHT_LEVEL 40   // Dusk level
#define DAY_LEVEL 30     // Daylight level
#define LIGHT_SENSOR_SAMPLES 10  // Number of samples to average

void carAtEntranceInit();
void carAtEntranceUpdate();
bool isCarDetected();

#endif // CAR_AT_ENTRANCE_H