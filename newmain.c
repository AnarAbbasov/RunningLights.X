/*
 * File:   newmain.c
 * Author: User 1
 *
 * Created on January 10, 2022, 6:37 PM
 */


// PIC16F628A Configuration Bit Settings

// 'C' source line config statements

#pragma config FOSC = INTOSCCLK // Oscillator Selection bits (INTOSC oscillator: CLKOUT function on RA6/OSC2/CLKOUT pin, I/O function on RA7/OSC1/CLKIN)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable bit (PWRT disabled)
#pragma config MCLRE = OFF      // RA5/MCLR/VPP Pin Function Select bit (RA5/MCLR/VPP pin function is digital input, MCLR internally tied to VDD)
#pragma config BOREN = OFF      // Brown-out Detect Enable bit (BOD disabled)
#pragma config LVP = OFF        // Low-Voltage Programming Enable bit (RB4/PGM pin has digital I/O function, HV on MCLR must be used for programming)
#pragma config CPD = OFF        // Data EE Memory Code Protection bit (Data memory code protection off)
#pragma config CP = OFF         // Flash Program Memory Code Protection bit (Code protection off)
// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.
#define _XTAL_FREQ 4000000
// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

#include <xc.h>
#include "leds.h"

void main(void) {
    int blink=0;
    CMCONbits.CM = 0b111;
     TRISBbits.TRISB0 = 0;
     TRISBbits.TRISB1 = 0;
     TRISBbits.TRISB2 = 0;
     TRISBbits.TRISB3 = 0;
     TRISBbits.TRISB4 = 0;
     TRISBbits.TRISB5 = 0;
     TRISA=0x1F;
  
    while(1)
    {
       /**/
        
        if (button_pressed()){
            blink=1;
        }
                
                
        if(blink!=0)
        {
      running_leds_forward();
        }
        else {
      blinking_leds();
        }
    }
    
    
    return;
}
