#include "buzzer.hpp"
#include "danger_mode.hpp"
#include "lcd.hpp"
#include "constante_buzzer.h"

#define PinBuzin 11
#define PinBuzout 9
#define PinLcd 8
#define PinLed 7

Ecran MyEcran;
Buzzer MyBuzzer(11);

void setup(){
  pinMode(PinBuzin,INPUT);
  pinMode(PinBuzout,OUTPUT);
  pinMode(PinLcd, INPUT);
  pinMode(PinLed,INPUT);
}


void loop(){
    int b=digitalRead(PinBuzin);
    int lc=digitalRead(PinLcd);
    int le=digitalRead(PinLed);
    
    if (b){
      if (not musicbuz){
        MyBuzzer.DangerModeActivation("STARS WARS");
        musicbuz=true;}
      }
    if(lc){MyEcran.DangerModeActivation("DANGER MODE!");}
    if(le){}
  }
