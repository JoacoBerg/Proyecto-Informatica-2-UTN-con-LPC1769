/*******************************************************************************************************************************//**
 *
 * @file		PR_Eçntradas.h
 * @brief		Breve descripción del objetivo del Módulo
 * @date		14 de nov. de 2017
 * @author		Ing. Marcelo Trujillo
 *
 **********************************************************************************************************************************/

/***********************************************************************************************************************************
 *** MODULO
 **********************************************************************************************************************************/

#ifndef PRIMITIVAS_INC_PR_ENTRADAS_H_
#define PRIMITIVAS_INC_PR_ENTRADAS_H_

/***********************************************************************************************************************************
 *** INCLUDES GLOBALES
 **********************************************************************************************************************************/
#include <DR_Entradas.h>

#include "DR_tipos.h"

#define IR1_l 0
#define IR2_l 1
#define IR3_l 2
#define IR4_l 3
#define IR5_l 4

#define IR_IZQ_OUT LeerEntrada (IR1_l)
#define IR_IZQ_IN LeerEntrada (IR2_l)
#define IR_DER_IN LeerEntrada (IR3_l)
#define IR_DER_OUT LeerEntrada (IR4_l)
#define IR_OBSTACULO LeerEntrada (IR5_l)
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
// extern tipo nombreVariable;

/***********************************************************************************************************************************
 *** PROTOTIPOS DE FUNCIONES GLOBALES
 **********************************************************************************************************************************/
uint8_t LeerEntrada ( uint8_t nEntrada );

#endif /* PRIMITIVAS_INC_PR_ENTRADAS_H_ */