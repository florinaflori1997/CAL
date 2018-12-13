/* 
 * File:   sys_tasks.h
 * Author: Cristian T. A.
 *
 * Created on August 17, 2018, 1:26 PM
 */

#include "general.h"
#include "sys_tasks.h"
#include "hal_motor.h"
#include "hal_servomotor.h"

#include "mcal_init.h"

int counter = 0;
void TASK_Inits()
{
    MCAL_vInit();
    GPIO_u8SetPortPin(PORT_A, 10, DIGITAL, OUTPUT);
	vMotorInit();
}

void TASK_1ms()
{

}

void TASK_5ms()
{
    
}

void TASK_10ms()
{   

}

void TASK_100ms()
{ 
    
}

void TASK_500ms()
{ 

}

void TASK_1000ms()
{
	vSetMotorDir(FWD);
	vSetMotorSpeed(50);
	counter++;
	if(counter < 3)
		vSetAngle(90);
	if(counter == 3)
		vSetAngle(60);
	if(counter == 6)
	{
		vSetMotorSpeed(10);
		vSetAngle(90);
	}
	if(counter == 9)
	{
		vSetAngle(120);
		counter=0;
	}
	
}
	