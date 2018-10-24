/*
 * DIO_AT32_Prog.c
 *
 *  Created on: Oct 6, 2018
 *      Author: magdy
 */


/********************************************************************************
***** Includes                  										    *****
********************************************************************************/
#include "utilites.h"
#include "DIO_AT32_CFG.h"
/********************************************************************************
***** Global variables                   								    *****
********************************************************************************/



/********************************************************************************
***** Functions Definitions                								    *****
********************************************************************************/

/* ------------------------------------------------------------------------------
[Function Name] : DIO_Write_PinDir
[Description] : This function is to define pin dir out or in
[Args] :
[in] : Input or Output & Pin Number
[out] : N/A
[in/out] : N/A
[Returns] : N/A
------------------------------------------------------------------------------ */
void DIO_Write_PinDir(uint8 PinNum,uint8 Dir){
	uint8 PinLocation = PinNum / PortPins;
	uint8 PinIndex = PinNum % PortPins;
	uint8 check =TRUE;

	if(Dir == OutPut){
		switch(PinLocation){
			case 0: SET_BIT(DDRA,PinIndex);
				break;
			case 1: SET_BIT(DDRB,PinIndex);
				break;
			case 2: SET_BIT(DDRC,PinIndex);
				break;
			case 3: SET_BIT(DDRD,PinIndex);
				break;
			default:check = FALSE;


		}
	}else if(Dir == InPut){
		switch(PinLocation){
			case 0: CLR_BIT(DDRA,PinIndex);
					break;
			case 1: CLR_BIT(DDRB,PinIndex);
					break;
			case 2: CLR_BIT(DDRC,PinIndex);
					break;
			case 3: CLR_BIT(DDRD,PinIndex);
					break;
			default:check = FALSE;


		}

	}else{
		check =FALSE;
	}

}

/* ------------------------------------------------------------------------------
[Function Name] : DIO_Write_PinVal
[Description] : This function is used whin pin is output to write the value
[Args] :
[in] : value HIGH or LOW & Pin Number
[out] : N/A
[in/out] : N/A
[Returns] : N/A
------------------------------------------------------------------------------ */
void DIO_Write_PinVal(uint8 PinNum,uint8 Val){
	uint8 PinLocation = PinNum / PortPins;
	uint8 PinIndex = PinNum % PortPins;
	uint8 check =TRUE;

		if(Val == STD_HIGH){
			switch(PinLocation){
				case 0: SET_BIT(PORTA,PinIndex);
					break;
				case 1: SET_BIT(PORTB,PinIndex);
					break;
				case 2: SET_BIT(PORTC,PinIndex);
					break;
				case 3: SET_BIT(PORTD,PinIndex);
					break;
				default:check = FALSE;


			}
		}else if(Val == STD_LOW){
			switch(PinLocation){
				case 0: CLR_BIT(PORTA,PinIndex);
					break;
				case 1: CLR_BIT(PORTB,PinIndex);
					break;
				case 2: CLR_BIT(PORTC,PinIndex);
					break;
				case 3: CLR_BIT(PORTD,PinIndex);
					break;
				default:check = FALSE;


			}

		}else{
			check =FALSE;
		}

}

/* ------------------------------------------------------------------------------
[Function Name] : DIO_Read_PinVal
[Description] : This function is to read the value of input pin
[Args] :
[in] : Pin Number
[out] : N/A
[in/out] : N/A
[Returns] : pin value
------------------------------------------------------------------------------ */
void DIO_Read_PinVal(uint8 PinNum,uint8 * Val){
	uint8 PinLocation = PinNum / PortPins;
	uint8 PinIndex = PinNum % PortPins;
	uint8 check =TRUE;

	switch(PinLocation){
		case 0: *Val=GET_BIT(PINA,PinIndex);
			break;
		case 1: *Val=GET_BIT(PINB,PinIndex);
			break;
		case 2: *Val=GET_BIT(PINC,PinIndex);
			break;
		case 3: *Val=GET_BIT(PIND,PinIndex);
			break;
		default:check = FALSE;


	}

}

