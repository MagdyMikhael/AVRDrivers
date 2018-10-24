/*
 * DIO_AT32_CFG.h
 *
 *  Created on: Oct 6, 2018
 *      Author: magdy
 */

#ifndef DIO_AT32_CFG_H_
#define DIO_AT32_CFG_H_

/********************************************************************************
***** Includes                  										    *****
********************************************************************************/
#include "DIO_AT32_Private.h"
#include "DIO_AT32_Interfacing.h"

/********************************************************************************
*********************************************************************************
***** Functions ProtoTypes                  							    *****
*********************************************************************************
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
void DIO_Write_PinDir(uint8 PinNum,uint8 Dir);

/* ------------------------------------------------------------------------------
[Function Name] : DIO_Write_PinVal
[Description] : This function is used whin pin is output to write the value
[Args] :
[in] : value HIGH or LOW & Pin Number
[out] : N/A
[in/out] : N/A
[Returns] : N/A
------------------------------------------------------------------------------ */
void DIO_Write_PinVal(uint8 PinNum,uint8 Val);

/* ------------------------------------------------------------------------------
[Function Name] : DIO_Read_PinVal
[Description] : This function is to read the value of input pin
[Args] :
[in] : Pin Number
[out] : N/A
[in/out] : N/A
[Returns] : pin value
------------------------------------------------------------------------------ */
void DIO_Read_PinVal(uint8 PinNum,uint8 * Val);




/********************************************************************************
***** Enumerations and Structures              							    *****
********************************************************************************/

#endif /* DIO_AT32_CFG_H_ */
