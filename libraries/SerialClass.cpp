#include "SerialClass.h"
#include <string.h>
#include <stdio.h>
#include "conio.h"

SerialClass::SerialClass()
{     
}

char SerialClass::read () 
{
  return (char) _getch();
}

char SerialClass::peek ( )
{ 
  char val = 0;
  if (available())
  {
    val = (char) _getch ();
    _ungetch(val); // unread the console character
  }
  return val;
}

void SerialClass::begin (int baudrate)
{
  // Don't care;
} 

int SerialClass::available ()
{
  return _kbhit();
}

void SerialClass::print ( char * line )
{
  int len = strlen ( line );
  for (int i=0; i<strlen(line); i++)
    print ( line[i] );
}
void SerialClass::println ( char * line )
{
  print ( line );
  println ();
}
void SerialClass::print ( char ch)
{
  putch ( ch ); 
}

void SerialClass::println ( unsigned long number )
{
  print (number);
  println ();
}

void SerialClass::println ( int number )
{
  print (number);
  println();     
}

void SerialClass::print ( unsigned long number )
{
  printf ( "%d", number );
}

void SerialClass::print ( int number)
{
  printf ( "%d", number );
}
void SerialClass::println ()
{
  printf ( "\n" );
}
void SerialClass::println (char ch)
{
  print (ch);
  println();    
}



