#include<avr/io.h>
#include<util/delay.h>
#include<avr/interrupt.h>
 unsigned char i =1, display[6] = {0x9f, 0x26, 0x0e, 0x9c, 0x4c, 0x44}; 
void buzz(void){ //buzzer
  PORTB = 1<<PB5; 
  _delay_ms(200);
  PORTB = 0; 
}
int main(void){
 DDRD = 0xff; //7 segment
 DDRB = 1<<PB5;
 sei();
 EICRA =  1; //int0 configuration
 EIMSK = 1;
 PCICR = 1;
PORTD = 0xfe;

while(1){
for(i=1; i<300; i++){
  _delay_ms(30);
}
_delay_ms(40);}


return 0;
}

ISR(INT0_vect){
  _delay_ms(300); 
  buzz();
  PORTD = display[i % 6];
  EIFR = 1; 
}
