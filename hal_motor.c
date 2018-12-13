
#include "mcal_gpio.h"
#include "mcal_pwm.h"
#include "hal_motor.h"


void vMotorInit()
{
	GPIO_u8SetPortPin(PORT_A , 9 , DIGITAL , OUTPUT);
}

void vSetMotorDir(T_U8 u8Dir)
{
	GPIO_u8WritePortPin(PORT_A,9,u8Dir);
}

void vSetMotorSpeed(T_U8 u8Speed)
{
	if (u8Speed > 0 && u8Speed < 100)	
		PWM1_vSetDuty(u8Speed , 2);
	else
		return;
}

void vSetMotorDirSpeed(T_U8 u8Dir , T_U8 u8Speed)
{
	GPIO_u8WritePortPin(PORT_A,9,u8Dir);
	if (u8Speed > 0 && u8Speed < 100)	
		PWM1_vSetDuty(u8Speed , 2);
	else
		return;
}