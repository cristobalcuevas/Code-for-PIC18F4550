/* 
 * File:   
 * Author: 
 * Comments:
 * Revision history: 
 */

#ifndef LCD_LIBRERIA_H
#define	LCD_LIBRERIA_H

#include <xc.h>

void lcd_Init(void);
void lcd_Comando(char cmd);

#define LCD_PORT    LATD
#define RS          LATDbits.LATD2
#define E           LATDbits.LATD3

#endif	/* LCD_LIBRERIA_H */