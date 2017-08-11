/*
 * At168.c
 *
 * Created: 28/04/2016 13:50:25
 * Author : Gustavo
 */ 

#define F_CPU 16000000

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRB  = (1<<0) | (1<<2) | (1<<4) | (1<<6);
	
    /* Replace with your application code */
    while (1) 
    {
		PORTB  = (1<<0) | (1<<2) | (1<<4) | (1<<6);		
		_delay_ms(250);
		PORTB  = (0<<0) | (0<<2) | (0<<4) | (0<<6);		
		_delay_ms(100);
		PORTB  = (1<<0) | (1<<2) | (1<<4) | (1<<6);	
		_delay_ms(100);
		PORTB  = (0<<0) | (0<<2) | (0<<4) | (0<<6);	
		_delay_ms(250);
    }
}

