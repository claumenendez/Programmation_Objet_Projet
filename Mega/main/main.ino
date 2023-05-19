#include "main.hpp"

//declaration des bool qui permettent un bon enchainement entre les modes danger et happy
bool actualizarTexto=true;
bool pausa=true; 
bool a=false;

//declaration des objets Myecran et Mybuzzer  
Ecran MyEcran;
Buzzer MyBuzzer(PinBuzout);

void setup(){
  pinMode(PinBuzin,INPUT);
  pinMode(PinBuzout,OUTPUT);
  pinMode(PinLcd, INPUT);
  Serial.begin(9600);
  MyEcran.DangerModeActivation("HAPPY MODE!"); //etat initial: happy mode
}

void activaraltavoz(){MyBuzzer.DangerModeActivation("GAME OF THRONES");} //fonction qui appelle le mode dangerModeActivation du buzzer

void loop(){
    int b=digitalRead(PinBuzin);
    int lc=digitalRead(PinLcd);
    
    if (lc){
      if (actualizarTexto) {
        MyEcran.clear();
        MyEcran.DangerModeActivation("DANGER MODE!");
        actualizarTexto = false;
        pausa=false;
        if(not musicbuz){musicbuz=true;MyBuzzer.DangerModeActivation("GAME OF THRONES");
      }
    }
    if (digitalRead(PinDesactivate)and pausa==false){
        actualizarTexto = true;
        MyEcran.clear();
        MyEcran.DangerModeActivation("HAPPY MODE!");
        pausa=true;
        a=true;
        MyBuzzer.DangerModeActivation("");
      }
    if (a){musicbuz=false; a=false;} 
}
