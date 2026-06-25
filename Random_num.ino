#include<avr/io.h>
#include<util/delay.h>
#include<stdlib.h>
int main(void){
 DDRD = 0xff;
 DDRB &= ~(0x01);
DDRB |= 1<<PB5; 
PORTB |= 0x21; 
 unsigned char i =1,j = 0, k , display[10] = {0x03,0x9f, 0x25, 0x0d, 0x99, 0x49, 0x41,0x11, 0x01, 0x09};
 while(i != j){
  
  for(i=1; i<255; i++){
    
  if((PINB & 1) ==0){
    _delay_ms(100);
    j= i;
    PORTB &= ~(1<<PB5);

    break;}
  
_delay_ms(50);
 }
 
 }
 srand(j);
 k = rand() % 10; 
 PORTD = display[k];
while(1);
return 0;
}
