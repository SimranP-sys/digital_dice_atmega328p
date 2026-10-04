#include<avr/io.h>
#include<avr/interrupt.h>
#include<util/delay.h>
unsigned char i,j = 1,k, b[4] = {0x01,0x02, 0x04,0x08}, a[15],t;

int main(void){
  sei();
  DDRC |= 0x0f; // pc0-pc4 output leds
  DDRD &= ~(0x1e); //pd1 input 
  PORTD |= 0x1e; //input pullup 
  TCCR0B= 0X01;
 
  TIMSK0 = 1; 


while(1){
  if((PIND & 0x1e)!= 0x1e){ 
    j = TCNT0;
    _delay_ms(20); //button stopping at any random value of i 
   PORTC = b[j % 4];
   _delay_ms(200);
  }
}
}
ISR(TIMER0_OVF_vect){
    TIFR0 = 0x01;
}