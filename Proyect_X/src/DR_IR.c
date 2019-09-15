/*******************************************************************************************************************************//**
 *
 * @file		DR_ir.c
 * @brief		Descripcion del modulo
 * @date		9 sep. 2019
 * @author		Ing. Marcelo Trujillo
 *
 **********************************************************************************************************************************/

/***********************************************************************************************************************************
 *** INCLUDES
 **********************************************************************************************************************************/
#include <DR_IR.h>


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
#define IR4 0,25
#define IR3 0,26
#define IR2 1,30
#define IR1 1,31

int IRx4[4]; //estado de

void InitIR(void)
	{



		//IR1
		GPIO_Pinsel(IR1, 0);		//Funcion del pin
		GPIO_Mode(IR1, 1);		//pull up? (or pull down) 0 = pull-up | 3 = pull-down?
		GPIO_Dir(IR1, 0);		//0: Entrada | 1: Salida

		//IR2
		GPIO_Pinsel(IR2, 0);		//Funcion del pin
		GPIO_Mode(IR2, 1);		//pull up? (or pull down) 0 = pull-up | 3 = pull-down?
		GPIO_Dir(IR2, 0);		//0: Entrada | 1: Salida

		//IR3
		GPIO_Pinsel(IR3, 0);		//Funcion del pin
		GPIO_Mode(IR3, 1);		//pull up? (or pull down) 0 = pull-up | 3 = pull-down?
		GPIO_Dir(IR3, 0);		//0: Entrada | 1: Salida

		//IR4
		GPIO_Pinsel(IR4, 0);		//Funcion del pin
		GPIO_Mode(IR4, 1);		//pull up? (or pull down) 0 = pull-up | 3 = pull-down?
		GPIO_Dir(IR4, 0);		//0: Entrada | 1: Salida

	}

void LecturaIRs(int* IRx4)
{
	(IRx4[0]) = GPIO_Get(IR1);
	(IRx4[1]) = GPIO_Get(IR2);
	(IRx4[2]) = GPIO_Get(IR3);
	(IRx4[3]) = GPIO_Get(IR4);
	return;
}



//------------------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------
//------------------------------MAQUINA DE ESTADOS DE FOLLOW THE LINE---------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------

void Mfollowtheline()
{
		//static int cruces = 0;
		static int estado = RESET;

		switch(estado)
		{
			case X11X:

				if(IR_2 == 0 && IR_3 == 1)
				{
					Tank_Right((PWM_DIVISOR*3)/4);
					estado = X01X;

				}
				if(IR_2 == 1 && IR_3 == 0)
				{
					Tank_Left((PWM_DIVISOR*3)/4);
					estado = X10X;

				}
				/*
				if(Cruce())
				{
					CruceAdd();
					estado = X11X;

				}*/

				break;

			case X10X:

				if(IR_2 == 1 && IR_3 == 1)
				{
					Tank_Forward((PWM_DIVISOR*3)/4);
					estado = X11X;

				}

				break;

			case X01X:

				if(IR_2 == 1 && IR_3 == 1)
				{
					Tank_Forward((PWM_DIVISOR*3)/4);
					estado = X11X;

				}

				break;

			case RESET:

				if(1==Boton())
				{
					Tank_Forward((PWM_DIVISOR*3)/4);
					estado = X11X;

				}

				break;

			case APAGAR:

				if(1==Boton())
				{
					Tank_Forward((PWM_DIVISOR*3)/4);
					estado = X11X;

				}

				break;

			case ALARMA:
				while(1){}

				break;

			default: estado = RESET;
		}
}

//Funciones asociadas a los eventos

int Boton(void)
{
		return 1;
}

/*
int Cruce(void)
{}
void CruceAdd(void)
{}
*/

//------------------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------
//------------------------------FIN MAQUINA DE ESTADOS DE FOLLOW THE LINE---------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------


