#include <cstdlib>
#include <stdlib.h>
#include "SerialClass.h"
#include "EEPROM.h"
#include "stdio.h"
#include <Wire.h>
#include "conio.h"

SerialClass Serial;
EEPROMClass EEPROM;
TwoWire Wire;

char pgm_read_byte ( char * ch) {return *ch;};
unsigned long milli = 0;
unsigned long millis() { 
  return milli++;
}
void digitalWrite (int pin, int value ) {}
void delay (int milliseconds){}
int analogRead (int which){return 0;}
float log (float value){return 0.0;}

#include "serialBasic.ino"

int main(int argc, char *argv[])
{
    printf ( "******************************************\n" );
    printf ( "*   Welcome to the Arduino simulator     *\n" );
    printf ( "*   Press Cntl-D to stop the loop        *\n" );
    printf ( "******************************************\n" );
    setup();
    while ((int) Serial.peek() != 4) // Cntl D
      loop();
         
    return EXIT_SUCCESS;
}
