#ifndef _USARTBAUDRATEREGISTERCALCULATOR_H
#define _USARTBAUDRATEREGISTERCALCULATOR_H

#include "Types.h"

uint8 UsartModel_CalculateBaudRateRegisterSetting(uint32 masterClock, uint32 baudRate);

#endif // _USARTBAUDRATEREGISTERCALCULATOR_H
