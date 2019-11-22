/*
 * ADC_atmega32_JUEL.h
 *
 * Created: 11/22/2019 6:57:02 PM
 *  Author: juel
 *  Email : md.tarikulislamjuel@gmail.com
 */ 


#ifndef ADC_ATMEGA32_JUEL_H_
#define ADC_ATMEGA32_JUEL_H_

#include <avr/io.h>

#define AREF 0                 // 0 0
#define AVCC 1                 // 0 1
#define INTERNAL 3             // 1 1

void ADC_INIT(uint8_t prescaler,uint8_t Voltage_Reference);

void ADC_PRESCALER_SET(uint8_t prescaler);
void ADC_voltage_Reference(uint8_t Reference_Voltage);

uint16_t ADC_READ(uint8_t channel);

#endif /* ADC_ATMEGA32_JUEL_H_ */