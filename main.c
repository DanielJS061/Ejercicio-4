#include <xc.h>
#include "config.h"
#define _XTAL_FREQ 20000000 

void main(void) {
    ADCON1 = 0X0F; 
    TRISB = 0xFF;  
    TRISD = 0;    

    while (1) { 
        LATDbits.LATD0 = PORTBbits.RB0;
        LATDbits.LATD1 = PORTBbits.RB1;
        LATDbits.LATD2 = PORTBbits.RB2;
        LATDbits.LATD3 = PORTBbits.RB3;
        LATDbits.LATD4 = PORTBbits.RB4;
        LATDbits.LATD5 = PORTBbits.RB5;
        LATDbits.LATD6 = PORTBbits.RB6;
        LATDbits.LATD7 = PORTBbits.RB7;
    }
    return;
}
