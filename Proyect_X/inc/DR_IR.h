/*******************************************************************************************************************************//**
 *
 * @file		DR_ir.h
 * @brief		Breve descripción del objetivo del Módulo
 * @date		9 sep. 2019
 * @author		Ing. Marcelo Trujillo
 *
 **********************************************************************************************************************************/

/***********************************************************************************************************************************
 *** MODULO
 **********************************************************************************************************************************/

#ifndef APLICATION_INC_DR_IR_H_
#define APLICATION_INC_DR_IR_H_

/***********************************************************************************************************************************
 *** INCLUDES GLOBALES
 **********************************************************************************************************************************/
#include "DR_GPIO.h"
/***********************************************************************************************************************************
 *** DEFINES GLOBALES
 **********************************************************************************************************************************/

/***********************************************************************************************************************************
 *** MACROS GLOBALES
 **********************************************************************************************************************************/

/***********************************************************************************************************************************
 *** TIPO DE DATOS GLOBALES
 **********************************************************************************************************************************/

/***********************************************************************************************************************************
 *** VARIABLES GLOBALES
 **********************************************************************************************************************************/
extern int IRx4[4];

/***********************************************************************************************************************************
 *** PROTOTIPOS DE FUNCIONES GLOBALES
 **********************************************************************************************************************************/
void InitIR(void);
void LecturaIRs(int*); //se le pasa un vectorde cuatro, donde la pos. 0 es el IR1, etc
						// Declarado en InitIR() --> int IRx4[4];

#endif /* APLICATION_INC_DR_IR_H_ */
