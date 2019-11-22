# AVR-Atmega32-ADC
This is a ADC library for AVR Atmega32A



## Two main function:
        1) void ADC_INIT(uint8_t prescaler,uint8_t Voltage_Reference); 
        2) uint16_t ADC_READ(uint8_t channel);

## Function 1:(ADC initialization)
      ADC_INIT(prescaler,Voltage_Reference); 
     
      prescaler:(2,4,8,16,32,64,128)
      ADC needs sampling frequency which should be less then 250KHz.This sampling frequency provided by
      system clock frequency(16MHz,8MHz) after frequency divider.For example we use 16MHz external clock,
      now we neewsampling frequency less then 250MHz.So,16MHz/128=125KHz which is less then 250MHz.
      
