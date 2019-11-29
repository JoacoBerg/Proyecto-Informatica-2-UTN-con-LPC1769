/*******************************************************************************************************************************//**
 *
 * @file		DR_Salidas.c
 * @brief		Descripcion del modulo
 * @date		14 de nov. de 2017
 * @author		Ing. Marcelo Trujillo
 *
 **********************************************************************************************************************************/

/***********************************************************************************************************************************
 *** INCLUDES
 **********************************************************************************************************************************/
#include <DR_Salidas.h>
#include "DR_PINSEL.h"
#include "DR_GPIO.h"

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
__RW uint32_t BufferSalidas;		//!< Buffer de las salidas de los relays

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
	\fn  void RefrescoSalidas ( void )
	\brief Refresca el estadp de las salidas delos relays
 	\author Ing. Marcelo Trujillo
 	\date 14 de nov. de 2017
 	\param void
 	\return void
*/
void RefrescoSalidas ( void )
{
	SetPin ( SD0, ( BufferSalidas >> 0 ) & 1 );
	SetPin ( SD1, ( BufferSalidas >> 1 ) & 1 );
	SetPin ( SD2, ( BufferSalidas >> 2 ) & 1 );
}

/**
	\fn  void InicializarSalidas( void )
	\brief Configura las salidas de los relays
 	\author Ing. Marcelo Trujillo
 	\date 14 de nov. de 2017
 	\param void
 	\return void
*/
void InicializarSalidas( void )
{
	//!< Inicializar Salidas Digitales
	SetPinsel(SD0,PINSEL_GPIO);
	SetPinsel(SD1,PINSEL_GPIO);
	SetPinsel(SD2,PINSEL_GPIO);

	SetPinDir( SD0 , PINDIR_OUTPUT);
	SetPinDir( SD1 , PINDIR_OUTPUT);
	SetPinDir( SD2 , PINDIR_OUTPUT);
}
