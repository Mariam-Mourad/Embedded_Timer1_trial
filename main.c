/*
 * main.c
 *
 *  Created on: Aug 23, 2019
 *      Author: Mariam
 */
#include"std_types.h"
#include"Bit_calc.h"

#include"avr/delay.h"
#include<avr/interrupt.h>
#include"DIO_interface.h"
#include"ADC_interface.h"
#include"Timer_interface.h"

//#define OCR_ON_Time		1500
//#define OCR_OFF_Time	18500


void main (void)
{
	DIO_vidSetPinDirection(PORTB,PIN0,OUTPUT);
	DIO_vidSetPinValue(PORTB,PIN0,HIGH);
}

