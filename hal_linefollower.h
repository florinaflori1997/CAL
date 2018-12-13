#ifndef HAL_LINEFOLLOWER
#define HAL_LINEFOLLOWER

#include "general_types.h"

void LF_vSetPinsDir(BOOL bDir);
void LF_vWritePins(void);
T_U8 LF_u8ReadPins(void);

#endif