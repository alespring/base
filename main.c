 #include <stdlib.h> 
 #include  <avr/io.h> 
 
 
 #define F_CPU 8000000UL 
 #include <util/delay.h> 
 
 
 #define LED1_AUS PORTD &= ~(1<<PD0); //löscht PD1 
#define LED1_EIN PORTD |= (1<<PD0); //letzt PD1 

 
 #define LED2_AUS PORTD &= ~(1<<PD1); //löscht PD2 
 #define LED2_EIN PORTD |= (1<<PD1); //letzt PD2 
 
 
 #define LED3_AUS PORTD &= ~(1<<PD2); //löscht PD3 
 #define LED3_EIN PORTD |= (1<<PD2); //letzt PD3 
 
 
 #define LED4_AUS PORTD &= ~(1<<PD3); //löscht PD4 
 #define LED4_EIN PORTD |= (1<<PD3); //letzt PD4 

 
 #define LED5_AUS PORTD &= ~(1<<PD4); //löscht PD5 
 #define LED5_EIN PORTD |= (1<<PD4); //letzt PD5 
 
 
 #define LED6_AUS PORTD &= ~(1<<PD5); //löscht PD6 
 #define LED6_EIN PORTD |= (1<<PD5); //letzt PD6 
 
 
 #define LED7_AUS PORTD &= ~(1<<PD6); //löscht PD7 
 #define LED7_EIN PORTD |= (1<<PD6); //letzt PD7 
 
 
 #define LED8_AUS PORTD &= ~(1<<PD7); //löscht PD8 
 #define LED8_EIN PORTD |= (1<<PD7); //letzt PD8 
 
 
 #define TASTER1 !(PINC&(1<<PC1))
 #define TASTER2 !(PINC&(1<<PC2))

#define EIN 1
 
 
void led(uint8_t nr, uint8_t Zustand)
{
	switch(nr)// auf was beim switch geschaut wird in diesem fall ist es die Lednr. 
	{
	
		case 1:	//falls Fall eins
					if(Zustand == 1) //falls der Zustand der LED eingeschaltet ist es wird verglichen
					{
					PORTD |= (1<<PD0);	//der Befehl der die LED einschaltet
					}
					
					
					else //falls der erste Zustand nicht zutrifft
					{
					PORTD &= ~(1<<PD0);
					}
					
					
					break;
		
		
		case 2: //falls Fall zwei
					if(Zustand == 1)//falls der Zustand der LED eingeschaltet ist es wird verglichen
					{
					PORTD |= (1<<PD1);//der Befehl der die LED einschaltet
					}
					
					
					else //falls der erste Zustand nicht zutrifft
					{
					PORTD &= ~(1<<PD1);
					}
					
					
					break;
		
		
		case 3:	 //falls Fall drei
					if(Zustand == 1)//falls der Zustand der LED eingeschaltet ist es wird verglichen
					{
						PORTD |= (1<<PD2);//der Befehl der die LED einschaltet
					}
					
					else //falls der erste Zustand nicht zutrifft
					{
						PORTD &= ~(1<<PD2);
					}
			
		
					break;
					
		case 4: //falls Fall vier
					if(Zustand == 1)//falls der Zustand der LED eingeschaltet ist es wird verglichen
					{
					PORTD |= (1<<PD3);//der Befehl der die LED einschaltet
					}
					
					
					else //falls der erste Zustand nicht zutrifft
					{
					PORTD &= ~(1<<PD3);
					}
					
					
					
					break;
		
		case 5: //falls Fall fünf
					if(Zustand == 1)//falls der Zustand der LED eingeschaltet ist es wird verglichen
					{
					PORTD |= (1<<PD4);//der Befehl der die LED einschaltet
					}
					
					
					else //falls der erste Zustand nicht zutrifft
					{
					PORTD &= ~(1<<PD4);
					}
					
					break;
		
		
		
		case 6: //falls Fall sechs
					if(Zustand == 1)//falls der Zustand der LED eingeschaltet ist es wird verglichen
					{
					PORTD |= (1<<PD5);//der Befehl der die LED einschaltet
					}
					
					
					else //falls der erste Zustand nicht zutrifft
					{
					PORTD &= ~(1<<PD5);
					}
					
					break;
		

 
		case 7: //falls Fall sieben
					if(Zustand == 1)//falls der Zustand der LED eingeschaltet ist es wird verglichen
					{
					PORTD |= (1<<PD6);//der Befehl der die LED einschaltet
					}
					
					
					else //falls der erste Zustand nicht zutrifft
					{
					PORTD &= ~(1<<PD6);
					}
					
					break;
		
		
		
		case 8: //falls Fall acht
					if(Zustand == 1)//falls der Zustand der LED eingeschaltet ist es wird verglichen
					{
					PORTD |= (1<<PD7);//der Befehl der die LED einschaltet
					}
					
					
					else //falls der erste Zustand nicht zutrifft
					{
					PORTD &= ~(1<<PD7);
					}
					
					break;
		
		
		
		case 9:
					if(Zustand == 1)
					{
					PORTD |= (1<<PD0);
					PORTD |= (1<<PD1);
					PORTD |= (1<<PD2);
					PORTD |= (1<<PD3);
					PORTD |= (1<<PD4);
					PORTD |= (1<<PD5);
					PORTD |= (1<<PD6);
					PORTD |= (1<<PD7);
					}
					
					
					else
					{
					PORTD |= (1<<PD0);
					PORTD &= ~(1<<PD1);
					PORTD |= (1<<PD2);
					PORTD &= ~(1<<PD3);
					PORTD |= (1<<PD4);
					PORTD &= ~(1<<PD5);
					PORTD |= (1<<PD6);
					PORTD &= ~(1<<PD7);
					}
					
					break;
		
		
		
		case 10:
					if(Zustand == 0)
					{
					PORTD &= ~(1<<PD0);
					PORTD &= ~(1<<PD1);
					PORTD &= ~(1<<PD2);
					PORTD &= ~(1<<PD3);
					PORTD &= ~(1<<PD4);
					PORTD &= ~(1<<PD5);
					PORTD &= ~(1<<PD6);
					PORTD &= ~(1<<PD7);
					}
					
					
					else
					{
					PORTD &= ~(1<<PD0);
					PORTD |= (1<<PD1);
					PORTD &= ~(1<<PD2);
					PORTD |= (1<<PD3);
					PORTD &= ~(1<<PD4);
					PORTD |= (1<<PD5);
					PORTD &= ~(1<<PD6);
					PORTD |= (1<<PD7);
					}
					
					break;
			
	
	}//ende whileschleife

} //ende void 


int taster(char nr)
{
	/*switch(nr)
	{
		case 1:
					if(nr == 1)
					{
					
					}
					
					else
					{
					
					}
		
	
	
	}*/
int resultat = 0;
	
	switch(nr)
	{
		case 1:
				if(!(PINC & (1<<PC1)))
				{
					resultat=1;
				}
				
				else
				{
					resultat = 0;        // die verschiedenen Falle für die jeweiligen taster und die wenns dazu
				}
				
				break;
		
		case 2:
				if(!(PINC & (1<<PC2)))
				{
					resultat=1;
				}
				
				else
				{
					resultat = 0;
				}
				
				break;
	}

return resultat; // resultat soll wiederholt werden



}
	
 int main(void) 
 { 
 	DDRD = 0xFF; // alle Port_D auf Ausgang setzen 
 	PORTD = 0x00; // alle Port_D auf HIGH gesetzt 
	
	DDRC = 0x00; // alle PORT_C auf Eingang gesetzt
	PORTC = 0xFF; //alle PORT_C auf LOW gesetzt
	
	
	/*
	led(1,0);
	led(2,1);
	led(3,0);
	led(4,0);
	led(5,0);
	led(6,0);
	led(7,0);
	led(8,0);
	
	*/
	
	
	
	
	
	
	
	
	//led(9,0);
	//cd basrled(10,0);
	
	
 	 
 	/*DDRC &= ~(1<<PC1); 
 	PORTC |=(1<<PC1); */
	
	//DDRB = 0x00; // alle PORT_B auf Eingang gesetzt
	//PORTB = 0x00; //alle PORT_B auf LOW gesetzt
	
	/*short x = 100;
	short y = 400;*/
	
	
	
	
	
 	  	while(1) 
    { 
		if(taster(2))//taster2 wird angesprochen
		{
		
		
			led(2,1); //die Led mit dem zustand angeben falls schalter  gedrückt
		}else led(2,0);//die Led mit dem zustand angeben falls schalter nicht gedrückt
		
 
 	}// end of while 
 
 
 	return 0; 
 }//end of main 
