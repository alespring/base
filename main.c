#include <stdlib.h>
#include  <avr/io.h>

#define LED1_AUS PORTD &= ~(1<<PD1); //l�scht PD1
#define LED1_AUS PORTD �= (1<<PD1); //letzt PD1

int main(void)
{
	DDRD = 0xFF; // Port D als Ausgang setzen
	PORTD = 0xFF;//alle Pins an Port D auf high setzen
	
	 LED1_AUS;
	  
	while(1)
	{
      
	  
	  
	 

	}// end of while

	return 0;
}//end of main