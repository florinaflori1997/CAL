#include "hal_servomotor.h"
#include "mcal_pwm.h"
#include "general_types.h"
#define OFFSET_ANGLE 10
#define OFFSET_DUTY 4
#define REZ 0.04375

void vSetAngle(T_U8 u8angle)
{
	T_F16 DutyCycle;

	if(u8angle < 60)
		{
			u8angle=60;
		}
	if(u8angle > 120)
		{
			u8angle=120;
		}
	DutyCycle = OFFSET_DUTY + REZ*(u8angle - OFFSET_ANGLE);
	
	PWM1_vSetDuty(DutyCycle,1);
}
