/*
 * A.c
 *
 * Created: 11/17/2019 2:33:46 PM
 * Author : Md.Tarikul Islam Juel
 * md.tarikulislamjuel@gmail.com
 */ 


#ifndef F_CPU
#define F_CPU 16000000UL
#endif


#include <avr/io.h>
#include "lib/ADC_atmega32_JUEL.h"


int main(void)
{
	uint16_t DATA1;
	DDRC |=(1<<PC0)|(1<<PC4);

	ADC_INIT(128,AVCC);
	

	while(1)

	{	DATA1 = ADC_READ(7);


		if (DATA1>=512)
		{
			PORTC |=(1<<PC0);
		}
		else
		{
			PORTC &= ~(1<<PC0);
		}
		
		
	}

	
}

