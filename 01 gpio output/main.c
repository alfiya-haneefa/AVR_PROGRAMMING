/*
 * 01 gpio output.c
 *
 * Created: 13-11-2026 11:38:46
 * Author : hp
 */ 


#define F_CPU 16000000UL  //include the clock frequency
#include <avr/io.h>
#include <util/delay.h> //for delay function
int main(void)
{
    //setting the pin direction
	DDRB |= ((1 << DDB5) | (1 << DDB4)); //Configured PORTB PIN 5 as Output - using bitwise
    while (1) 
    {
	   PORTB |= (1 << PORTB5); //Making PORTB PIN 5 High.
	   _delay_ms(1000); //since 1000 ms = 1second
	   PORTB &= ~(1 << PORTB5); //Making PORTB PIN5 low.
	}
}

