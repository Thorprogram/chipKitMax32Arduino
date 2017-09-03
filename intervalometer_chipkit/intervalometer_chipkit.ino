#include <Goldelox_Const4D.h>
#include <Goldelox_Const4DSerial.h>
#include <Goldelox_Serial_4DLib.h>
#include <Goldelox_Types4D.h>
#include <Goldelox_LedDigitsDisplay.h>

#include <IOShieldOled.h>
#include <IOShieldTemp.h>
#include <Wire.h>

#define DEBUG_PORT Serial
#define uLCD144_PORT Serial1

// object indexes for Inputs, Image Addresses + Input Array
#define iLeddigits1H      0x0000
#define iLeddigits1L      0x0000
#define iiLeddigits1H     0x0000
#define iiLeddigits1L     0x2600


#define IOSHIELD_BUTTON_1 (4)
#define IOSHIELD_BUTTON_2 (78)
#define IOSHIELD_BUTTON_3 (80)
#define IOSHIELD_BUTTON_4 (81)

#define IOSHIELD_SLIDER_1 (2)
#define IOSHIELD_SLIDER_2 (7)
#define IOSHIELD_SLIDER_3 (8)
#define IOSHIELD_SLIDER_4 (79)


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

  Display.putstr("Starting\n");
  while(!Display.media_Init())
  {
    Display.putstr("Drive not mounted...");
    delay(200);
    Display.gfx_Cls();
    delay(200);
  }

//  Display.media_SetAdd(iLeddigits1H, iLeddigits1L);      // point to the Leddigits1 Leddigits1 image
//  Display.media_Image(4, 84);            // show all digits at 0, only do this once


    Display.gfx_Cls();

    IOShieldOled.begin();

    Wire.begin();    
    IOShieldTemp.config(IOSHIELDTEMP_ONESHOT | IOSHIELDTEMP_RES11 | IOSHIELDTEMP_ALERTHIGH);
    
    delay(1000);
}

void loop() {

int numx = random(999);
int irow;
float tempF, tempC;
String tempC_string;
char *temp;


    DEBUG_PORT.println("Starting App");
    //digitalWrite(PIN_LED1, HIGH);
    // Blink the display a bit.
    IOShieldOled.displayOff();
    delay(1000);
    IOShieldOled.displayOn();
    delay(1000);
    
    //Get Temperature in Celsius.
    tempC = IOShieldTemp.getTemp();
    DEBUG_PORT.print(tempC);
    DEBUG_PORT.print(" C, ");
    //Clear the virtual buffer
    IOShieldOled.clearBuffer();

    tempC_string = String(tempC, 3);
    temp = &tempC_string[0]; 
    Display.gfx_Cls();
    Display.gfx_MoveTo(0,10);
    Display.putstr(temp);
    Display.putstr("C");
    delay(5000);
     //Chosing Fill pattern 0
    IOShieldOled.setFillPattern(IOShieldOled.getStdPattern(0));
    //Turn automatic updating off
    IOShieldOled.setCharUpdate(0);
  
    //Draw a rectangle over wrting then slide the rectagle
    //down slowly displaying all writing
    for (irow = 0; irow < IOShieldOled.rowMax; irow++)
    {
        IOShieldOled.clearBuffer();
        IOShieldOled.setCursor(0, 0);
        IOShieldOled.putString("chipKIT");
        IOShieldOled.setCursor(0, 1);
        IOShieldOled.putString("Basic I/O Shield");
        IOShieldOled.setCursor(0, 2);
        IOShieldOled.putString("by Digilent");
    
        IOShieldOled.moveTo(0, irow);
        IOShieldOled.drawFillRect(127,31);
        IOShieldOled.moveTo(0, irow);
        IOShieldOled.drawLine(127,irow);
        IOShieldOled.updateDisplay();
        delay(100);
     }

    gfx_Part2();
    delay(1000);
    text_Tests();
    delay(1000); 
  
    Joystick_Tests();

    
      //  digitalWrite(PIN_LED1, LOW);
    DEBUG_PORT.println("End App");
}





void gfx_Part2(void)
{
  int i;
  int k;
  int l;
  word orbitx;
  word orbity;
  word vx[20];    // : array[0..19] of word ;
  word vy[20]; //     : array[0..19] of word ;
  Display.gfx_Cls();
  Display.putstr("gfx_M - gfx_O");
  DEBUG_PORT.println(F("gfx_M to gfx_T"));
  k = 46;
  l = 32;
  Display.gfx_MoveTo(k, l);
  Display.gfx_CircleFilled(k,l,5,BLUE);
  i = -90;   // 12 o'clock position
  while (i<270)
  {
    Display.gfx_Orbit(i, 25, &orbitx, &orbity);
    k = 3;
    if ((i % 90) == 0 )
      k = 5;
    Display.gfx_Circle(orbitx , orbity, k, BLUE);
    i += 30;   // each 30 degreees
  }
  
  Display.gfx_OutlineColour(YELLOW);
  Display.gfx_RectangleFilled(80,10,95,60,LIME);
  Display.gfx_OutlineColour(0);                    // turn outline off
  
  delay(1000);
  Display.gfx_Cls();
  Display.putstr("gfx_P - gfx_P");
  DEBUG_PORT.println(F("gfx_P to gfx_P"));
  vx[0] = 18;   vy[0] = 55;
  vx[1] = 18;   vy[1] = 40;
  vx[2] = 25;   vy[2] = 40;
  vx[3] = 25;   vy[3] = 55;
  vx[4] = 46;   vy[4] = 63;
  vx[5] = 55;   vy[5] = 39;
  vx[6] = 64;   vy[6] = 63;
  vx[7] = 46;   vy[7] = 29;
  vx[8] = 55;   vy[8] = 35;
  vx[9] = 64;   vy[9] = 29;
  vx[10] = 80; vy[10] = 25;
  vx[11] = 80; vy[11] = 39;
  vx[12] = 70; vy[12] = 49;
  vx[13] = 90; vy[13] = 49;
  vx[14] = 80; vy[14] = 39;
  vx[15] = 71; vy[15] = 29;
  vx[16] = 80; vy[16] = 35;
  vx[17] = 89; vy[17] = 29;
  // house
  Display.gfx_Rectangle(3,25,33,55,RED);             // frame
  Display.gfx_Triangle(3,25,18,4,33,25,YELLOW);      // roof
  Display.gfx_Polyline(4, &vx[0], &vy[0], CYAN);     // door
  Display.gfx_PutPixel(20, 47, LIME);               // door knob
  // man
  Display.gfx_Circle(55, 13, 10, BLUE);              // head
  Display.gfx_Line(55, 25, 55, 39, BLUE);            // body
  Display.gfx_Polyline(3, &vx[4], &vy[4], CYAN);     // legs
  Display.gfx_Polyline(3, &vx[7], &vy[7], BLUE);     // arms
  // woman
  Display.gfx_Circle(80, 13, 10, PINK);              // head
  Display.gfx_Polyline(5, &vx[10], &vy[10], BROWN);  // dress
  Display.gfx_Line(74, 63, 76, 49, PINK);            // left arm
  Display.gfx_Line(82, 49, 86, 63, PINK);            // right arm
  Display.gfx_Polyline(3, &vx[15], &vy[15], SALMON); // dress
  delay(1000);
  Display.gfx_Cls();
  Display.putstr("gfx_P - gfx_T");
  DEBUG_PORT.println(F("gfx_P to gfx_T"));
  vx[0] = 45; vy[0] = 20;
  vx[1] = 55; vy[1] = 10;
  vx[2] = 95; vy[2] = 20;
  vx[3] = 60; vy[3] = 25;
  vx[4] = 95; vy[4] = 30;
  vx[5] = 55; vy[5] = 40;
  vx[6] = 45; vy[6] = 30;
  Display.gfx_Polygon(7, vx, vy, RED);
  
  Display.gfx_Rectangle(0,10, 10,60, AQUA);
  Display.gfx_RectangleFilled(20,10, 40,60, ORANGE);
//	Display.gfx_ScreenMode(LANDSCAPE);
//	Display.gfx_ScreenMode(PORTRAIT);
  Display.gfx_Transparency(ON);
  Display.gfx_TransparentColour(YELLOW);  // how do we 'test' this?
  Display.gfx_Triangle(50,60, 70,40, 90,60,YELLOW);
}



void text_Tests(void)
{
  Display.gfx_Cls();
  DEBUG_PORT.println(F("Text Tests"));
  Display.putstr("Text Tests");
  
  Display.txt_Attributes(BOLD + INVERSE + ITALIC + UNDERLINED);
  Display.txt_Xgap(3);
  Display.txt_Ygap(3);
  Display.txt_BGcolour(YELLOW);
  Display.txt_FGcolour(WHITE);
  Display.txt_FontID(SYSTEM);
  Display.txt_MoveCursor(2, 0);
  Display.putstr("Hello There");
  
  Display.txt_MoveCursor(4, 1);
  Display.txt_Height(2);
  Display.txt_Width(1);
  Display.txt_Inverse(OFF);
  Display.txt_Italic(OFF);
  Display.txt_Opacity(TRANSPARENT);
  Display.txt_Set(TEXT_COLOUR, LIME);
  Display.txt_Underline(ON);
  Display.txt_Bold(OFF);
  Display.putstr("Hello There");
  Display.txt_Height(1);
  Display.txt_Width(1);
  Display.putCH('z');
  DEBUG_PORT.print(F("Char height="));
  DEBUG_PORT.print(Display.charheight('w') );
  DEBUG_PORT.print(F(" Width= "));
  DEBUG_PORT.print(Display.charwidth('w') );
  DEBUG_PORT.println(F(""));
  Display.txt_BGcolour(BLACK);
  Display.txt_FGcolour(LIME);
  Display.txt_FontID(SYSTEM);
  Display.txt_MoveCursor(0,0);      // reset
}



void Joystick_Tests(void)
{
  #define DOWNPIN IOSHIELD_BUTTON_3 
  #define LEFTPIN IOSHIELD_BUTTON_4
  #define RIGHTPIN IOSHIELD_BUTTON_1
  #define UPPIN IOSHIELD_BUTTON_2
    int i;
    int oldi;
    int leave;
    
    pinMode(DOWNPIN, INPUT);
    pinMode(LEFTPIN, INPUT);
    pinMode(RIGHTPIN, INPUT);
    pinMode(UPPIN, INPUT);
  
    pinMode(IOSHIELD_SLIDER_1, INPUT);
    pinMode(IOSHIELD_SLIDER_2, INPUT);
    pinMode(IOSHIELD_SLIDER_3, INPUT);
    pinMode(IOSHIELD_SLIDER_4, INPUT);

    Display.gfx_Cls();

    DEBUG_PORT.println(F("Joystick Tests"));
    Display.putstr("Joystick Tests\nPress Fire to\nExit");
    Display.txt_FGcolour(RED);
    i = -1;
    leave=0;
    while (leave != 4)
    {
        leave=0;
        Display.gfx_MoveTo(10,80);
        if (digitalRead(IOSHIELD_SLIDER_1) == HIGH) { 
            Display.gfx_CircleFilled(10, 80, 4, GREEN);
        } else {
            Display.gfx_CircleFilled(10, 80, 4, BLUE);
            leave=leave+1;
        }   
    
        Display.gfx_MoveTo(20,80);
        if (digitalRead(IOSHIELD_SLIDER_2) == HIGH) { 
            Display.gfx_CircleFilled(20, 80, 4, GREEN);
        } else {
            Display.gfx_CircleFilled(20, 80, 4, BLUE);
            leave=leave+1;
        }   
        
        Display.gfx_MoveTo(30,80);
        if (digitalRead(IOSHIELD_SLIDER_3) == HIGH) { 
            Display.gfx_CircleFilled(30, 80, 4, GREEN);
        } else {
            Display.gfx_CircleFilled(30, 80, 4, BLUE);
            leave=leave+1;
        }   
        
        Display.gfx_MoveTo(40,80);
        if (digitalRead(IOSHIELD_SLIDER_4) == HIGH) { 
            Display.gfx_CircleFilled(40, 80, 4, GREEN);
        } else {
            Display.gfx_CircleFilled(40, 80, 4, BLUE);
            leave=leave+1;
        }   
    

        oldi = i;
        if (digitalRead(DOWNPIN) == HIGH)
            i = DOWN;
        else if (digitalRead(LEFTPIN) == HIGH)
            i = LEFT;
        else if (digitalRead(RIGHTPIN) == HIGH)
            i = RIGHT;
        else if (digitalRead(UPPIN) == HIGH)
            i = UP;
        else
            i = RELEASED;
    
        if (i != oldi)
        {
            Display.txt_MoveCursor(5,3);
            switch (i)
        {
        case RELEASED : Display.putstr("Released");
          break;
        case UP       : Display.putstr("   Up   ");
          break;
        case LEFT     : Display.putstr("  Left  ");
          break;
        case DOWN     : Display.putstr("  Down  ");
          break;
        case RIGHT    : Display.putstr("  Right ");
          break;
      }
    }
  }
  
  Display.txt_FGcolour(LIME);
}
