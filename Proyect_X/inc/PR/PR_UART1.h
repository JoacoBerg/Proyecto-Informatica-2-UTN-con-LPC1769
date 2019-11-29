/*
 * PR_UART1.h
 *
 *  Created on: Oct 31, 2019
 *      Author: augusto
 */

#ifndef PR_UART1_H_
#define PR_UART1_H_

#include "DR_tipos.h"

int16_t UART1_PopRX( void );
void UART1_PushTX( uint8_t dato );

#endif /* PR_UART1_H_ */
