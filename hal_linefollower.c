#include "hal_linefollower.h"
#include "general.h"
#include "mcal_gpio.h"

void LF_vSetPinsDir(BOOL bDir)
{
	int i;
	for(i=0;i<=5;++i)
	{
		GPIO_u8SetPortPin(PORT_C,i,DIGITAL,bDir);
	}
}

void LF_vWritePins(void)
{	int i;
	for(i=0;i<=5;++i)
	{
		GPIO_u8WritePortPin(PORT_C,i,HIGH);
	}
}
T_U8 LF_u8ReadPins(void)
{
	LF_vSetPinsDir(OUTPUT);
	LF_vWritePins();
	__delay_us(10);
	LF_vSetPinsDir(INPUT);
	__delay_us(250);
	T_U16 u16PortValue = GPIO_u16ReadPort(PORT_C);
	T_U8 u8Masca = 0x3F;
	return u8Masca&&u16PortValue;
} 
	