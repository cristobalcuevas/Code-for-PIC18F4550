/* 
 * File: interrupcion_libreria.h
 * Author: Cristobal
 * Comments:
 * Revision history: 
 */

#ifndef INTERRUPCION_LIBRERIA_H
#define	INTERRUPCION_LIBRERIA_H

#include <xc.h>
#include "configuracion.h"

void INT_Init(void);

void __interrupt(high_priority) INT_TMR1_ALTA(void);
void __interrupt(low_priority) INT_TMR1_BAJA(void);

#endif	/* INTERRUPCION_LIBRERIA_H */

