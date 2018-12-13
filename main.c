#include "general.h"
#include "sys_tasks.h"
#include "sys_schedule.h"
#include "hal_motor.h"
#include "hal_servomotor.h"
#include "hal_linefollower.h"

#define FWD 0
#define BWD 1

int main()
{
	TASK_Inits();
	//TASK_vSchedule();
  	T_U8 u8PinsValue;
	vSetAngle(90);
    while(1)
    { 
		u8PinsValue = LF_u8ReadPins();
		if(u8PinsValue == 0b00011000)
		{	
			vSetMotorDirSpeed(FWD,30);
		}
		else
		{	
			vSetMotorDirSpeed(BWD,50);
		}
    }
    return 0;
}
