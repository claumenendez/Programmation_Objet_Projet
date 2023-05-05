#include "buzzer.hpp"
#include "danger_mode.hpp"
#include "lcd.hpp"
#include "constante_buzzer.h"

#define PinBuzin 24
#define PinBuzout 22
#define PinLcd 10
#define PinDesactivate 30
//#define PinLed 7

Ecran MyEcran;
Buzzer MyBuzzer(PinBuzout);

void setup(){
  pinMode(PinBuzin,INPUT);
  pinMode(PinBuzout,OUTPUT);
  pinMode(PinLcd, INPUT);
  MyEcran.DangerModeActivation("HAPPY MODE!");
  //pinMode(PinLed,INPUT);
  Serial.begin(9600);
}
bool actualizarTexto=true;
bool pausa=false;
void activaraltavoz(){MyBuzzer.DangerModeActivation("STARS WARS");}
void loop(){
    int b=digitalRead(PinBuzin);
    int lc=digitalRead(PinLcd);
    //int le=digitalRead(PinLed);
    //Serial.println(lc);

    if (lc){
      if (actualizarTexto) {
        MyEcran.clear();
        MyEcran.DangerModeActivation("DANGER MODE!");
        actualizarTexto = false;
        pausa=false;
      }
    }
    if (digitalRead(PinDesactivate)and pausa==false){
        actualizarTexto = true;
        MyEcran.clear();
        MyEcran.DangerModeActivation("HAPPY MODE!");
        pausa=true;
        musicbuz=false;
      }

    if (b){
      if (not musicbuz){
        Serial.println("etsoy");
        activaraltavoz();
        musicbuz=true;}
      }
    

    //if(le){}
    
    }
