# atmega328p\_digital\_dice



The given Random\_num file provides embedded C (bare metal) code for this project.
The project generates a random number between 0-6 and display it on 7 segment display using atmega328P uC. 





##### Project structure: 



The aims to mimic the dice setup. 

Like a traditional dice, the project will generate random numbers between 1-6 using and display it on seven segment display. 

Every time user presses the "set" push button, a random number will be generated.



Program to generate random number was implemented using a simple for loop counter.

The current program requires no use of stdlib library or any other in-built library of AVR uC or Arduino for number generation. 



###### Concepts used: 



1. C loops 
2. AVR interrupts 
3. Register configuration 
4. Mask bits for 7 segment anode display
5. Random number generation (stdlib library)
6. GPIOs and key bounce



Earlier, the project code was implemented using stdlib library using two functions srand() and rand(). 

This code used around 796 bytes or 2% of the program memory. 



The current code uses around 358 or 1% of program memory.  



##### **Components used :**


1. 7 segment common anode display : To display the dice value from 1-6.
2. Arduino Uno board : 
3. Arduino IDE : for writing embedded c code
4. buzzer
5. push button and resistors.

