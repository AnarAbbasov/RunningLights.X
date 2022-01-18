#include <xc.h>
#include "leds.h"
#define _XTAL_FREQ 4000000


void running_leds_forward()
{
    PORTBbits.RB0=1;
    PORTBbits.RB5=0;
    __delay_ms(1000);
    PORTBbits.RB1=1;
    PORTBbits.RB0=0;
            
    __delay_ms(1000);
    PORTBbits.RB2=1;
    PORTBbits.RB1=0;
    __delay_ms(1000);
    PORTBbits.RB2=0;
    PORTBbits.RB3=1;
    __delay_ms(1000);
    PORTBbits.RB3=0;
    PORTBbits.RB4=1;
    __delay_ms(1000);
    PORTBbits.RB4=0;
    PORTBbits.RB5=1;
    __delay_ms(1000);
    return;
   
}

void blinking_leds()
{
PORTBbits.RB0=1;
PORTBbits.RB2=1;
PORTBbits.RB4=1;
__delay_ms(1000);
PORTBbits.RB0=0;
PORTBbits.RB2=0;
PORTBbits.RB4=0;
__delay_ms(1000);
PORTBbits.RB1=1;
PORTBbits.RB3=1;
PORTBbits.RB5=1;
__delay_ms(1000);
PORTBbits.RB1=0;
PORTBbits.RB3=0;
PORTBbits.RB5=0;
return ;

}


int button_pressed()
{
    if (PORTAbits.RA0==1)
    {
    return 1;}
    else
    {
        return 0;
        
    }
    
}