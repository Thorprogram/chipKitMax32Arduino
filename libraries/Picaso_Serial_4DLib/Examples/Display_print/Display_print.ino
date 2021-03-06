//Simple Demo that demonstrates 'print' and 'println' new functionality.

#define DisplaySerial Serial

//-------Picaso DISPLAYS-------

#include <Picaso_Const4D.h>
#include <Picaso_Serial_4DLib.h>

//use Serial0 to communicate with the display.
Picaso_Serial_4DLib Display(&DisplaySerial); 

//---------END-----------------

void setup() {
  //For handling errors
  Display.Callback4D = mycallback ;
  //
  //5 second timeout on all commands  
  Display.TimeLimit4D   = 5000 ;
  Serial.begin(9600) ;

  //--------------------------------Optional reset routine-----------------------------------
  //Reset the Display using D4 of the Arduino (if using the new 4D Arduino Adaptor - Rev 2)
  //If using the old 4D Arduino Adaptor (Rev 1), change D4 to D2 below.
  //If using jumper wires, reverse the logic states below. 
  //Refer to the accompanying application note for important information.
  pinMode(4, OUTPUT);  // Set D4 on Arduino to Output (4D Arduino Adaptor V2 - Display Reset)
  digitalWrite(4, 1);  // Reset the Display via D4
  delay(100);
  digitalWrite(4, 0);  // unReset the Display via D4
  //-----------------------------------------END---------------------------------------------
  
  delay (5000); //let the display start up  

  Display.gfx_ScreenMode(PORTRAIT);
  //Display.gfx_BGcolour(WHITE) ; //change background color to white
  Display.gfx_Cls();            //clear the screen

  char a = 'A';
  char a2 = 'B';
  int b = 1234;
  int b2 = -1234;
  long c = 123456;
  long c2 = -123456;
  String string = "This is string class";
  char charr[30] = "This is const char array";
  float d = 123.456789;
  float d2 = -123.456789;
  float nan = NAN;
  float inf = INFINITY;
  float ovf1 = 5294967040.0;
  float ovf2 = -5294967040.0;  
  
  Display.print(a); Display.print(' ');
  Display.println(a2);
  Display.print(b); Display.print(' ');
  Display.println(b2);
  Display.print(c); Display.print(' ');
  Display.println(c2);
  Display.println("This is String"); 
  Display.println(F("This is Flashstring")); 
  Display.println(string); 
  Display.println(charr);
  Display.println(d,6);
  Display.println(d2, 3);  
  Display.println(nan);
  Display.println(inf);  
  Display.println(ovf1);
  Display.println(ovf2);  
  
//  Display.print("asvb") ;
 uint8_t za = 123 ;
  Display.println(za); //prints String Class
 int8_t zb = -123 ;
  Display.println(zb); //prints String Class
// uint16_t c = 123 ;
  unsigned int zc = 123 ;
  Display.println(zc); //prints unsignedd ints
  int16_t zd = -123 ;
  Display.println(zd); //prints String Class
//  uint32_t e = 123 ;
//  unsigned long e = 123 ;
//  Display.println(e); //prints String Class
  int32_t f = -123 ;
  Display.println(f); //prints String Class
  
//  Display.print("asvb") ;
 uint8_t za2 = 123 ;
  Display.print(za2); //prints String Class
  Display.print("\n");
 int8_t zb2 = -123 ;
  Display.print(zb2); //prints String Class
  Display.print("\n");
// uint16_t c = 123 ;
  unsigned int zc2 = 123 ;
  Display.print(zc2); //prints unsignedd ints
  Display.print("\n");
  int16_t zd2 = -123 ;
  Display.print(zd2); //prints String Class
  Display.print("\n");
//  uint32_t e = 123 ;
//  unsigned long e2 = 123 ;
//  Display.print(e2); //prints String Class
  Display.print("\n");
  int32_t f2 = -123 ;
  Display.print(f2); //prints String Class
  Display.print("\n");

}

void loop() 
{

}

void mycallback(int ErrCode, unsigned char Errorbyte)
{
  // Pin 13 has an LED connected on most Arduino boards. Just give it a name
  int led = 13;
  pinMode(led, OUTPUT);
  while(1)
  {
    digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(200);                // wait for 200 ms
    digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
    delay(200);                // wait for 200 ms
  }
}


