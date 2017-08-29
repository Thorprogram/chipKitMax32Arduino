#include <Goldelox_Const4D.h>
#include <Goldelox_Const4DSerial.h>
#include <Goldelox_Serial_4DLib.h>
#include <Goldelox_Types4D.h>
#include <Goldelox_LedDigitsDisplay.h>

#define DEBUG_PORT Serial
#define uLCD144_PORT Serial1

// object indexes for Inputs, Image Addresses + Input Array
#define iLeddigits1H      0x0000
#define iLeddigits1L      0x0000
#define iiLeddigits1H     0x0000
#define iiLeddigits1L     0x2600

Goldelox_Serial_4DLib Display(&uLCD144_PORT);

void Callback(int ErrCode, unsigned char ErrByte)
{
      DEBUG_PORT.print("Callback ErrorCode: 0x");
      DEBUG_PORT.print(ErrCode, HEX);
      DEBUG_PORT.println("");
      DEBUG_PORT.print("Callback ErrorByte: 0x");
      DEBUG_PORT.print(ErrByte, HEX);
      DEBUG_PORT.println("");
}


void setup() {

  DEBUG_PORT.begin(9600);

  uLCD144_PORT.flush();
  uLCD144_PORT.end();
  
  delay(3000);
  uLCD144_PORT.begin(9600);
     
     Display.TimeLimit4D = 5000;
     Display.Callback4D = Callback;
     
  Display.putstr("Starting\n") ;
  while(!Display.media_Init())
  {
    Display.putstr("Drive not mounted...");
    delay(200);
    Display.gfx_Cls();
    delay(200);
  }

  Display.media_SetAdd(iLeddigits1H, iLeddigits1L) ;      // point to the Leddigits1 Leddigits1 image
  Display.media_Image(4, 84) ;            // show all digits at 0, only do this once
    
    
    Display.gfx_Cls();  
    delay(1000);
}

void loop() {

int numx = random(999);

    DEBUG_PORT.println("Starting App");
    digitalWrite(PIN_LED1, HIGH);
    delay(1000);

     
     // Display.gfx_MoveTo(10, 100);
     // Display.putstr("Hello World\n");
     // Display.putstr("Hello again");

LedDigitsDisplay(Display, numx, iiLeddigits1H, iiLeddigits1L, 4, 84, 4, 3, 29, 0) ;


  
  //Display.gfx_BGcolour(BEIGE);  // Form1
  
 // Display.txt_Height(2) ;
 // Display.txt_FGcolour(STEELBLUE) ;
 // Display.txt_BGcolour(BEIGE) ;
 // Display.gfx_MoveTo(84, 28) ;
 // Display.putstr("258") ;            // Label1 Label1
 // Display.txt_Height(1) ;
  
 // Display.gfx_OutlineColour(SLATEGRAY) ;
 // Display.gfx_RectangleFilled(0, 0, 127, 25, BEIGE) ;  // Rectangle1
 // Display.gfx_OutlineColour(BLACK) ;

    
 // Display.media_SetAdd(iStatictext1H, iStatictext1L) ;      // point to the Statictext1 Statictext1 image
 // Display.media_Image(0, 28) ;            // show image

//  Display.gfx_MoveTo(10, 45);
//  Display.putstr("my put string");
  
    digitalWrite(PIN_LED1, LOW);
    DEBUG_PORT.println("End App");
}
