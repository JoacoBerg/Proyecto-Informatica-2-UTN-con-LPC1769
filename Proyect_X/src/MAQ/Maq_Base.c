/*
 * Maq_Base.c
 *
 *  Created on: 27 oct. 2019
 *      Author: gif30
 */
#include "Maq_Base.h"
#include "DR_Servo.h"


//esta pensada para que se reciba incluso la vuelta a base (osea un 0 al final) y las bases separadas por comas

#define START_POSITION 0

int get_nodos(int init, int fin);
int get_start_dir(int init, int fin);
int get_last_dir(int init, int fin);

int Rx_Pop(void){
 return 0;
}
#define SEPARATOR ','



uint8_t Maq_Base(void){

	Servo_Abierto();
	uint8_t lectura = 0;

	static int fin = START_POSITION;
	static int init = START_POSITION;
	static uint8_t start_dir = FORWARD;
	static uint8_t last_dir = FORWARD;
	static int nodos = 0;



	init = fin;
	lectura = Rx_Pop();

	if(lectura != -1){
		if(lectura == SEPARATOR)
			lectura = Rx_Pop(); //esta hecho para nums de 1 digito por ahora. pero se puede escalar a futuro cambiando la logica de rst

		fin = (int) lectura; //checkear esto
		nodos = get_nodos(init, fin);
		if ( nodos == 1){
			start_dir = FORWARD;
			last_dir  = FORWARD;

			Push_list_estados(GIRO_DER);
			Push_list_estados(GIRO_DER);
			Push_list_estados(FORWARD);
			Push_list_estados(FORWARD);
			Push_list_estados(CAJA);

		}
		else if (!nodos){
			//no deberia llegar nunca aca
		}
		else{
			start_dir = get_start_dir(init, fin);
			last_dir  = get_last_dir(init, fin);

			Push_list_estados(GIRO_DER);
			Push_list_estados(GIRO_DER);
			Push_list_estados(FORWARD);


			Push_list_estados(start_dir);

			for (int i = nodos-1;i>0;i--)
				Push_list_estados(FORWARD);

			Push_list_estados(last_dir);


			Push_list_estados(FORWARD);
			Push_list_estados(CAJA);

		}
		return ENPROCESO;
	}
	else{
		Servo_Cerrado();
		return EXITO;
	}
}



int get_nodos(int init, int fin){
	if(fin == init){
		return 0; //no hace nada porque no tiene a donde ir
	}
	else if(fin > init){
		return ( fin - init + (init%2) )/2 + 1;
	}
	else if(fin < init){
		return ( init - fin + (fin%2) )/2 + 1;
	}
	return 0;
}


int get_start_dir(int init, int fin){
	if(init%2){
		if( fin > init ){
			return GIRO_DER;
		}
		else{
			return GIRO_IZQ;
		}
	}
	else{
		if( fin > init ){
			return GIRO_IZQ;
		}
		else{
			return GIRO_DER;
		}
	}
}


int get_last_dir(int init, int fin){
	if(GIRO_DER == get_start_dir(init, fin)){
		return GIRO_IZQ;
	}
	else{
		return GIRO_DER;
	}
}
