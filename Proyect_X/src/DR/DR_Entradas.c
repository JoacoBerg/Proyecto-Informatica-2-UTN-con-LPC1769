
/*******************************************************************************************************************************//**
 *
 * @file		Template.c
 * @brief		Breve descripción del objetivo del Módulo
 * @date		Fecha de creacion del archivo XX/XX/XXXX
 * @author		Nombre, Apellido
 *
 **********************************************************************************************************************************/

/***********************************************************************************************************************************
 *** INCLUDES
 **********************************************************************************************************************************/
#include "DR_tipos.h"
#include "DR_Entradas.h"
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
__RW uint32_t BufferEntradas = 0;


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
 \fn  int main(void)
 \brief funcion principal
 \param void
 \return void
 */
void DebounceEntradas (void){
}
/**
	@fn  		void InicializarEntradas ( void )
	@brief 		Inicializacion de las entradas digitales
 	@author 	Ing. Marcelo Trujillo
 	@date 		8-11-16
 	@param 		void
	@return 	void
*/
void InicializarEntradas ( void )
{
	SetPinDir( 0, 0 , PINDIR_INPUT );
	SetPinDir( 0, 0 , PINDIR_INPUT );
	SetPinDir( 0, 0 , PINDIR_INPUT );

	SetPinMode(  0, 0  , PINMODE_PULLUP );
	SetPinMode(  0, 0  , PINMODE_PULLUP );
	SetPinMode(  0, 0  , PINMODE_PULLUP );
}
