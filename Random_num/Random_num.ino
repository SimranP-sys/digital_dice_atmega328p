#include<avr/io.h>
#include<util/delay.h>
#include<stdlib.h>
void buzz(void){
  PORTB = 1<<PB5; 
  _delay_ms(200);
  PORTB = 0; 
}
int main(void){
 DDRD = 0xff;
 DDRB &= ~(0x01);
DDRB |= 1<<PB5; 
PORTB |= 1; 
PORTD = 0xfd;
 unsigned char i =1,j = 0, k , display[6] = {0x9f, 0x25, 0x0d, 0x99, 0x49, 0x41};
 while(i != j){
  
  for(i=1; i<255; i++){
    
  if((PINB & 1) ==0){
    _delay_ms(100);
    j= i;
    PORTB &= ~(1<<PB5);

    break;}
  
_delay_ms(39);
 }
 
 }
 srand(j);
 k = rand() % 6; 
 buzz();
 PORTD = display[k];
while(1);
return 0;
}

