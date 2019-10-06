/*******************************************************************************************************************************//**
 *
 * @file		Infotronic.h
 * @brief		Declaracion de tipos Globales
 * @date		23-03-16
 * @author		Marcelo Trujillo
 *
 **********************************************************************************************************************************/

/***********************************************************************************************************************************
 *** MODULO
 **********************************************************************************************************************************/

#ifndef DR_TIPOS_H_
#define DR_TIPOS_H_

#define ENPROCESO 0
#define EXITO 1
#define FALLO 2

/***********************************************************************************************************************************
 *** INCLUDES GLOBALES
 **********************************************************************************************************************************/

/***********************************************************************************************************************************
 *** DEFINES GLOBALES
 **********************************************************************************************************************************/

/***********************************************************************************************************************************
 *** MACROS GLOBALES
 **********************************************************************************************************************************/
#define     __R				volatile const  	// !< Modificador para solo lectura
#define 	__W     		volatile 	       	// !<  Modificador para solo escritura
#define 	__RW			volatile           	// !< Modificador lectura / escritura
#define 	ON				1
#define 	OFF				0

#ifndef 	NULL
#define 	NULL				(( void *) 0)
#endif
/***********************************************************************************************************************************
 *** TIPO DE DATOS GLOBALES
 **********************************************************************************************************************************/

typedef		unsigned int		uint32_t;
typedef		short unsigned int	uint16_t;
typedef		unsigned char		uint8_t ;
typedef		int					int32_t;
typedef		short int			int16_t;
typedef		char				int8_t;


//	LED RGB
#define LEDR 0,22
#define LEDG 3,25
#define LEDB 3,26

#define LED_ON 0
#define LED_OFF 1

#define LOW		0
#define HIGH	1




#define 	ALTO	1
#define 	BAJO	0

/***********************************************************************************************************************************
 *** VARIABLES GLOBALES
 **********************************************************************************************************************************/

/***********************************************************************************************************************************
 *** PROTOTIPOS DE FUNCIONES GLOBALES
 **********************************************************************************************************************************/

#endif /* DR_TIPOS_H_ */
