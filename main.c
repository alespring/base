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
 
 
 int main(void) 
 { 
 	DDRD = 0xFF; // alle Port_D auf Ausgang setzen 
 	PORTD = 0xFF; // alle Port_D auf HIGH gesetzt 
 	 
 	DDRC &= ~(1<<PC1); 
 	PORTC |=(1<<PC1); 
	
	//DDRB = 0x00; // alle PORT_B auf Eingang gesetzt
	//PORTB = 0x00; //alle PORT_B auf LOW gesetzt
	
	short x = 100;
	short y = 400;
	
 	  	while(1) 
    { 
 	 
 		if(TASTER1) 
 		{  		 
			LED1_EIN;	// LED_1 eingeschaltet 
			_delay_ms(x); // Pause eingefügt bis nächster Befehl erkannt wird 
			LED1_AUS; // LED_1 ausgeschaltet 
			_delay_ms(x); // Pause eingefügt bis nächster Befehl erkannt wird 
			 
			 
			LED3_EIN;	// LED_3 eingeschaltet; 
			_delay_ms(x); // Pause eingefügt bis nächster Befehl erkannt wird 
			LED3_AUS; // LED_3 ausgeschaltet 
			_delay_ms(x); // Pause eingefügt bis nächster Befehl erkannt wird 
			 
			 
			LED2_EIN;	// LED_2 eingeschaltet; 
			_delay_ms(x); // Pause eingefügt bis nächster Befehl erkannt wird 
			LED2_AUS; // LED_2 ausgeschaltet 
			_delay_ms(x); // Pause eingefügt bis nächster Befehl erkannt wird$ 
			 
			 
			LED4_EIN;	// LED_4 eingeschaltet; 
			_delay_ms(x); // Pause eingefügt bis nächster Befehl erkannt wird 
			LED4_AUS; // LED_4 ausgeschaltet 
			_delay_ms(x); // Pause eingefügt bis nächster Befehl erkannt wird 
			 
			 
			LED3_EIN;	// LED_3 eingeschaltet 
			_delay_ms(x); // Pause eingefügt bis nächster Befehl erkannt wird 
			LED3_AUS; // LED_3 ausgeschaltet 
			_delay_ms(x); // Pause eingefügt bis nächster Befehl erkannt wird 
			 
			 
			LED5_EIN;	// LED_5 eingeschaltet 
			_delay_ms(x); // Pause eingefügt bis nächster Befehl erkannt wird 
			LED5_AUS; // LED_5 ausgeschaltet 
			_delay_ms(x); // Pause eingefügt bis nächster Befehl erkannt wird 
			 
			 
			LED4_EIN;	// LED_4 eingeschaltet 
			_delay_ms(x); // Pause eingefügt bis nächster Befehl erkannt wird 
			LED4_AUS; // LED_4 ausgeschaltet 
			_delay_ms(x); // Pause eingefügt bis nächster Befehl erkannt wird 
			 
			 
			LED6_EIN;	// LED_6 eingeschaltet 
			_delay_ms(x); // Pause eingefügt bis nächster Befehl erkannt wird 
			LED6_AUS; // LED_6 ausgeschaltet 
			_delay_ms(x); // Pause eingefügt bis nächster Befehl erkannt wird 
			 
			 
			LED5_EIN;	// LED_5 eingeschaltet 
			_delay_ms(x); // Pause eingefügt bis nächster Befehl erkannt wird 
			LED5_AUS; // LED_5 ausgeschaltet 
			_delay_ms(x); // Pause eingefügt bis nächster Befehl erkannt wird 
			 
			 
			LED7_EIN;	// LED_7 eingeschaltet 
			_delay_ms(x); // Pause eingefügt bis nächster Befehl erkannt wird 
			LED7_AUS; // LED_7 ausgeschaltet 
			_delay_ms(x); // Pause eingefügt bis nächster Befehl erkannt wird 
			 
			 
			LED6_EIN;	// LED_6 eingeschaltet 
			_delay_ms(x); // Pause eingefügt bis nächster Befehl erkannt wird 
			LED6_AUS; // LED_6 ausgeschaltet 
			_delay_ms(x); // Pause eingefügt bis nächster Befehl erkannt wird 
			 
			 
			LED8_EIN;	// LED_8 eingeschaltet 
			_delay_ms(x); // Pause eingefügt bis nächster Befehl erkannt wird 
			LED8_AUS; // LED_8 ausgeschaltet 
			_delay_ms(x); // Pause eingefügt bis nächster Befehl erkannt wird 
			 
			LED8_EIN;	// LED_8 eingeschaltet 
			_delay_ms(x); // Pause eingefügt bis nächster Befehl erkannt wird 
			LED8_AUS; // LED_8 ausgeschaltet 
			_delay_ms(x); // Pause eingefügt bis nächster Befehl erkannt wird 
			 
			 
			LED6_EIN;	// LED_6 eingeschaltet 
			_delay_ms(x); // Pause eingefügt bis nächster Befehl erkannt wird 
			LED6_AUS; // LED_6 ausgeschaltet 
			_delay_ms(x); // Pause eingefügt bis nächster Befehl erkannt wird 
			 
			 
			LED7_EIN;	// LED_7 eingeschaltet 
			_delay_ms(x); // Pause eingefügt bis nächster Befehl erkannt wird 
			LED7_AUS; // LED_7 ausgeschaltet 
			_delay_ms(x); // Pause eingefügt bis nächster Befehl erkannt wird 
			 
			 
			LED5_EIN;	// LED_5 eingeschaltet 
			_delay_ms(x); // Pause eingefügt bis nächster Befehl erkannt wird 
			LED5_AUS; // LED_5 ausgeschaltet 
			_delay_ms(x); // Pause eingefügt bis nächster Befehl erkannt wird 
			 
			 
			LED6_EIN;	// LED_6 eingeschaltet 
			_delay_ms(x); // Pause eingefügt bis nächster Befehl erkannt wird 
			LED6_AUS; // LED_6 ausgeschaltet 
			_delay_ms(x); // Pause eingefügt bis nächster Befehl erkannt wird 
			 
			 
			LED4_EIN;	// LED_4 eingeschaltet 
			_delay_ms(x); // Pause eingefügt bis nächster Befehl erkannt wird 
			LED4_AUS; // LED_4 ausgeschaltet 
			_delay_ms(x); // Pause eingefügt bis nächster Befehl erkannt wird 
			 
			 
			LED5_EIN;	// LED_5 eingeschaltet 
			_delay_ms(x); // Pause eingefügt bis nächster Befehl erkannt wird 
			LED5_AUS; // LED_5 ausgeschaltet 
			_delay_ms(x); // Pause eingefügt bis nächster Befehl erkannt wird 
			 
			 
			LED3_EIN;	// LED_3 eingeschaltet 
			_delay_ms(x); // Pause eingefügt bis nächster Befehl erkannt wird 
			LED3_AUS; // LED_3 ausgeschaltet 
			_delay_ms(x); // Pause eingefügt bis nächster Befehl erkannt wird 
			 
			 
			LED4_EIN;	// LED_4 eingeschaltet 
			_delay_ms(x); // Pause eingefügt bis nächster Befehl erkannt wird 
			LED4_AUS; // LED_4 ausgeschaltet 
			_delay_ms(x); // Pause eingefügt bis nächster Befehl erkannt wird 
			 
			 
			LED2_EIN;	// LED_2 eingeschaltet 
			_delay_ms(x); // Pause eingefügt bis nächster Befehl erkannt wird 
			LED2_AUS; // LED_2 ausgeschaltet 
			_delay_ms(x); // Pause eingefügt bis nächster Befehl erkannt wird 
			 
			 
			LED3_EIN;	// LED_3 eingeschaltet 
			_delay_ms(x); // Pause eingefügt bis nächster Befehl erkannt wird 
			LED3_AUS; // LED_3 ausgeschaltet 
			_delay_ms(x); // Pause eingefügt bis nächster Befehl erkannt wird 
			 
			 
			LED1_EIN;	// LED_1 eingeschaltet 
			_delay_ms(x); // Pause eingefügt bis nächster Befehl erkannt wird 
			LED1_AUS; // LED_1 ausgeschaltet 
			_delay_ms(x); // Pause eingefügt bis nächster Befehl erkannt wird 
				 
				} 
				
				else
				{
				LED1_EIN;	// LED_1 eingeschaltet 
			_delay_ms(y); // Pause eingefügt bis nächster Befehl erkannt wird 
			LED1_AUS; // LED_1 ausgeschaltet 
			_delay_ms(y); // Pause eingefügt bis nächster Befehl erkannt wird 
			 
			 
			LED3_EIN;	// LED_3 eingeschaltet; 
			_delay_ms(y); // Pause eingefügt bis nächster Befehl erkannt wird 
			LED3_AUS; // LED_3 ausgeschaltet 
			_delay_ms(y); // Pause eingefügt bis nächster Befehl erkannt wird 
			 
			 
			LED2_EIN;	// LED_2 eingeschaltet; 
			_delay_ms(y); // Pause eingefügt bis nächster Befehl erkannt wird 
			LED2_AUS; // LED_2 ausgeschaltet 
			_delay_ms(y); // Pause eingefügt bis nächster Befehl erkannt wird$ 
			 
			 
			LED4_EIN;	// LED_4 eingeschaltet; 
			_delay_ms(y); // Pause eingefügt bis nächster Befehl erkannt wird 
			LED4_AUS; // LED_4 ausgeschaltet 
			_delay_ms(y); // Pause eingefügt bis nächster Befehl erkannt wird 
			 
			 
			LED3_EIN;	// LED_3 eingeschaltet 
			_delay_ms(y); // Pause eingefügt bis nächster Befehl erkannt wird 
			LED3_AUS; // LED_3 ausgeschaltet 
			_delay_ms(y); // Pause eingefügt bis nächster Befehl erkannt wird 
			 
			 
			LED5_EIN;	// LED_5 eingeschaltet 
			_delay_ms(y); // Pause eingefügt bis nächster Befehl erkannt wird 
			LED5_AUS; // LED_5 ausgeschaltet 
			_delay_ms(y); // Pause eingefügt bis nächster Befehl erkannt wird 
			 
			 
			LED4_EIN;	// LED_4 eingeschaltet 
			_delay_ms(y); // Pause eingefügt bis nächster Befehl erkannt wird 
			LED4_AUS; // LED_4 ausgeschaltet 
			_delay_ms(y); // Pause eingefügt bis nächster Befehl erkannt wird 
			 
			 
			LED6_EIN;	// LED_6 eingeschaltet 
			_delay_ms(y); // Pause eingefügt bis nächster Befehl erkannt wird 
			LED6_AUS; // LED_6 ausgeschaltet 
			_delay_ms(y); // Pause eingefügt bis nächster Befehl erkannt wird 
			 
			 
			LED5_EIN;	// LED_5 eingeschaltet 
			_delay_ms(y); // Pause eingefügt bis nächster Befehl erkannt wird 
			LED5_AUS; // LED_5 ausgeschaltet 
			_delay_ms(y); // Pause eingefügt bis nächster Befehl erkannt wird 
			 
			 
			LED7_EIN;	// LED_7 eingeschaltet 
			_delay_ms(y); // Pause eingefügt bis nächster Befehl erkannt wird 
			LED7_AUS; // LED_7 ausgeschaltet 
			_delay_ms(y); // Pause eingefügt bis nächster Befehl erkannt wird 
			 
			 
			LED6_EIN;	// LED_6 eingeschaltet 
			_delay_ms(y); // Pause eingefügt bis nächster Befehl erkannt wird 
			LED6_AUS; // LED_6 ausgeschaltet 
			_delay_ms(y); // Pause eingefügt bis nächster Befehl erkannt wird 
			 
			 
			LED8_EIN;	// LED_8 eingeschaltet 
			_delay_ms(y); // Pause eingefügt bis nächster Befehl erkannt wird 
			LED8_AUS; // LED_8 ausgeschaltet 
			_delay_ms(y); // Pause eingefügt bis nächster Befehl erkannt wird 
			 
			LED8_EIN;	// LED_8 eingeschaltet 
			_delay_ms(y); // Pause eingefügt bis nächster Befehl erkannt wird 
			LED8_AUS; // LED_8 ausgeschaltet 
			_delay_ms(y); // Pause eingefügt bis nächster Befehl erkannt wird 
			 
			 
			LED6_EIN;	// LED_6 eingeschaltet 
			_delay_ms(y); // Pause eingefügt bis nächster Befehl erkannt wird 
			LED6_AUS; // LED_6 ausgeschaltet 
			_delay_ms(y); // Pause eingefügt bis nächster Befehl erkannt wird 
			 
			 
			LED7_EIN;	// LED_7 eingeschaltet 
			_delay_ms(y); // Pause eingefügt bis nächster Befehl erkannt wird 
			LED7_AUS; // LED_7 ausgeschaltet 
			_delay_ms(y); // Pause eingefügt bis nächster Befehl erkannt wird 
			 
			 
			LED5_EIN;	// LED_5 eingeschaltet 
			_delay_ms(y); // Pause eingefügt bis nächster Befehl erkannt wird 
			LED5_AUS; // LED_5 ausgeschaltet 
			_delay_ms(y); // Pause eingefügt bis nächster Befehl erkannt wird 
			 
			 
			LED6_EIN;	// LED_6 eingeschaltet 
			_delay_ms(y); // Pause eingefügt bis nächster Befehl erkannt wird 
			LED6_AUS; // LED_6 ausgeschaltet 
			_delay_ms(y); // Pause eingefügt bis nächster Befehl erkannt wird 
			 
			 
			LED4_EIN;	// LED_4 eingeschaltet 
			_delay_ms(y); // Pause eingefügt bis nächster Befehl erkannt wird 
			LED4_AUS; // LED_4 ausgeschaltet 
			_delay_ms(y); // Pause eingefügt bis nächster Befehl erkannt wird 
			 
			 
			LED5_EIN;	// LED_5 eingeschaltet 
			_delay_ms(y); // Pause eingefügt bis nächster Befehl erkannt wird 
			LED5_AUS; // LED_5 ausgeschaltet 
			_delay_ms(y); // Pause eingefügt bis nächster Befehl erkannt wird 
			 
			 
			LED3_EIN;	// LED_3 eingeschaltet 
			_delay_ms(y); // Pause eingefügt bis nächster Befehl erkannt wird 
			LED3_AUS; // LED_3 ausgeschaltet 
			_delay_ms(y); // Pause eingefügt bis nächster Befehl erkannt wird 
			 
			 
			LED4_EIN;	// LED_4 eingeschaltet 
			_delay_ms(y); // Pause eingefügt bis nächster Befehl erkannt wird 
			LED4_AUS; // LED_4 ausgeschaltet 
			_delay_ms(y); // Pause eingefügt bis nächster Befehl erkannt wird 
			 
			 
			LED2_EIN;	// LED_2 eingeschaltet 
			_delay_ms(y); // Pause eingefügt bis nächster Befehl erkannt wird 
			LED2_AUS; // LED_2 ausgeschaltet 
			_delay_ms(y); // Pause eingefügt bis nächster Befehl erkannt wird 
			 
			 
			LED3_EIN;	// LED_3 eingeschaltet 
			_delay_ms(y); // Pause eingefügt bis nächster Befehl erkannt wird 
			LED3_AUS; // LED_3 ausgeschaltet 
			_delay_ms(y); // Pause eingefügt bis nächster Befehl erkannt wird 
			 
			 
			LED1_EIN;	// LED_1 eingeschaltet 
			_delay_ms(y); // Pause eingefügt bis nächster Befehl erkannt wird 
			LED1_AUS; // LED_1 ausgeschaltet 
			_delay_ms(y); // Pause eingefügt bis nächster Befehl erkannt wird 
				}
			
	
			
		 
			 
			 
			/* 
		  LED1_EIN;	// LED_1 eingeschaltet 
			for(x=0;x<100000;x++); // Pause eingefügt bis nächster Befehl erkannt wird 
			LED1_AUS; // LED_1 ausgeschaltet 
			for(x=0;x<100000;x++); // Pause eingefügt bis nächster Befehl erkannt wird 
			  
			  
			LED2_EIN; 
			for(x=0;x>100000;x++); 
			LED2_AUS; 
			for(x=0;x>100000;x++); // Pause eingefügt bis nächster Befehl erkannt wird 
			 
			 
			LED3_EIN;	// LED_3 eingeschaltet 
			for(x=0;x>100000;x++); // Pause eingefügt bis nächster Befehl erkannt wird 
			LED3_AUS; // LED_3 ausgeschaltet 
			for(x=0;x>100000;x++); // Pause eingefügt bis nächster Befehl erkannt wird 
			 
			 
			LED4_EIN;	// LED_4 eingeschaltet 
			for(x=0;x>100000;x++); // Pause eingefügt bis nächster Befehl erkannt wird 
			LED4_AUS; // LED_4 ausgeschaltet 
			for(x=0;x>100000;x++); // Pause eingefügt bis nächster Befehl erkannt wird 
			 
			 
			LED5_EIN;	// LED_5 eingeschaltet 
			for(x=0;x>100000;x++); // Pause eingefügt bis nächster Befehl erkannt wird 
			LED5_AUS; // LED_5 ausgeschaltet 
			for(x=0;x>100000;x++); // Pause eingefügt bis nächster Befehl erkannt wird 
			 
			 
			LED6_EIN;	// LED_6 eingeschaltet 
			for(x=0;x>100000;x++); // Pause eingefügt bis nächster Befehl erkannt wird 
			LED6_AUS; // LED_6 ausgeschaltet 
			for(x=0;x>100000;x++); // Pause eingefügt bis nächster Befehl erkannt wird 
			 
			 
			LED7_EIN;	// LED_7 eingeschaltet 
			for(x=0;x>100000;x++); // Pause eingefügt bis nächster Befehl erkannt wird 
			LED7_AUS; // LED_7 ausgeschaltet 
			for(x=0;x>100000;x++); // Pause eingefügt bis nächster Befehl erkannt wird 
			 
			 
			LED8_EIN;	// LED_8 eingeschaltet 
			for(x=0;x>100000;x++); // Pause eingefügt bis nächster Befehl erkannt wird 
			LED8_AUS; // LED_8 ausgeschaltet 
			for(x=0;x>100000;x++); // Pause eingefügt bis nächster Befehl erkannt wird 
			 
			*/ 
			  
			  
			 
			  
			   
			 
			
 	 
	 
 	 

 
 	}// end of while 
 
 
 	return 0; 
 }//end of main 
