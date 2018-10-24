/*
 * main.c
 *
 *  Created on: Oct 6, 2018
 *      Author: magdy
 */
#include "DIO_AT32_CFG.h"
#include "utilites.h"
#include "STD_Types.h"
#include <avr/delay.h>

void main(){
	DIO_Write_PinDir(PD0, InPut);
	DIO_Write_PinDir(PD3, OutPut);
	uint8 ButtonCase;
	while(TRUE){
		DIO_Read_PinVal(PD0, &ButtonCase);
		_delay_ms(50);
		if(ButtonCase == 1){
			DIO_Write_PinVal(PD3, STD_HIGH);
		}else{
			DIO_Write_PinVal(PD3, STD_LOW);
		}

	}
}

