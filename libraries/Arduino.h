#include "SerialClass.h"
#include "stdlib.h"
//typedef char boolean
#define PGM_P char *
/* 
typedef  char * PGM_P
PGM_P * PSTR ( char * line) 
{
  return ( &line[0] ); 
}
*/
#define PSTR (char *)
#define prog_char char
extern char pgm_read_byte ( char * );
extern SerialClass Serial;
extern unsigned long millis();
extern void digitalWrite ( int, int);
extern void delay (int);
extern int analogRead (int);
extern float log (float);



