#pragma once
#ifndef ACS712_H_
#define ACS712_H_

/******************************CONFIG*******************************/

#define ACS712_ADC_CHANNEL		ADC_CHANNAL_0
#define ACS712_ADC_PRESCALER	ADC_DIV_64

/****************************INTERFACE******************************/

void ACS712_voidInit(void);
u16 ACS712_u16GetCurrentReading(void);

#endif