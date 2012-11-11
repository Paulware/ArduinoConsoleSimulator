#ifndef SERIAL_H
#define SERIAL_H
//#include <windows.h>
class SerialClass
{
  public:          
    // Constructor
    SerialClass(); 
    //  Serial.begin (115200);	
	void begin (int); 
	void print ( char );
	void print ( unsigned long);
	void print ( char *);
	void print ( int );
	void print ( float ){};
	void println ( float ){};
	void println ( unsigned long );
	void println ( int );
	void println ();
	void println ( char *);
	void println ( char );
	char read();
	int available ();
	char peek();
  // private:
};
extern SerialClass Serial;

#endif


