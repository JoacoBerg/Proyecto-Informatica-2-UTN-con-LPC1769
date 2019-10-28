/*******************************************************************************************************************************//**
 *
 * @file		PR_Entradas.c
 * @brief		Descripcion del modulo
 * @date		14 de nov. de 2017
 * @author		Ing. Marcelo Trujillo
 *
 **********************************************************************************************************************************/

/***********************************************************************************************************************************
 *** INCLUDES
 **********************************************************************************************************************************/
#include "PR_Entradas.h"

/***********************************************************************************************************************************
 *** DEFINES PRIVADOS AL MODULO
 **********************************************************************************************************************************/

/***********************************************************************************************************************************
 *** MACROS PRIVADAS AL MODULO
 **********************************************************************************************************************************/

/***********************************************************************************************************************************
 *** TIPOS DE DATOS PRIVADOS AL MODULO
 **********************************************************************************************************************************/

/***********************************************************************************************************************************
 *** TABLAS PRIVADAS AL MODULO
 **********************************************************************************************************************************/

/***********************************************************************************************************************************
 *** VARIABLES GLOBALES PUBLICAS
 **********************************************************************************************************************************/

/***********************************************************************************************************************************
 *** VARIABLES GLOBALES PRIVADAS AL MODULO
 **********************************************************************************************************************************/

/***********************************************************************************************************************************
 *** PROTOTIPO DE FUNCIONES PRIVADAS AL MODULO
 **********************************************************************************************************************************/

 /***********************************************************************************************************************************
 *** FUNCIONES PRIVADAS AL MODULO
 **********************************************************************************************************************************/

 /***********************************************************************************************************************************
 *** FUNCIONES GLOBALES AL MODULO
 **********************************************************************************************************************************/
/**
	\fn  uint8_t Entradas ( uint8_t nEntrada )
	\brief Valor de una de las entradas digitales
 	\author Ing. Marcelo Trujillo
 	\date 14 de nov. de 2017
 	\param [in] numero de entrada
		<ul>
			<li> Numeros de entrada en las siguientes macros
			<ol>
			<li> ENTRADA0 : 0
			<li> ENTRADA1 : 1
			<li> ENTRADA2 : 2
			</ol>
		</ul>
	\return tipo y descripcion de retorno
*/
uint8_t LeerEntrada ( uint8_t nEntrada )
{
	return ( BufferEntradas >> nEntrada ) & 1;
}