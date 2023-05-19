//declaration des variables avant les librairies afin de pouvoir realiser une bonne gestion des exceptions
bool exceptionActivated1 = false;
bool exceptionActivated2 = false;

//librairies
#include "motor.hpp"
#include "ir_receiver.hpp"
#include <Servo.h>
#include "constants.h"



//globals constants
DcMotor MyMotor;
Receiver MyirReceiver(IR_RECEIVE_PIN);
Servo MyServo1;
Servo MyServo2;

void setup() {
   Serial.begin(9600);

   //servo 1: initialisation
   pinMode(PinServo1,OUTPUT);
   MyServo1.attach(PinServo1);
   MyServo1.write(0);
   
   //servo 2: initialisation
   pinMode(PinServo2,OUTPUT);
   MyServo2.attach(PinServo2);
   MyServo2.write(0);

   //output PINS configuration to command the MEGA2560 
   pinMode(PinLcd,OUTPUT);
   pinMode(PinDesactivate,OUTPUT);
   pinMode(PinBuz,OUTPUT);
 

   //motor DC initialisation
   MyMotor.setVitesse(100);

   // IR receiver initialisation
   IrReceiver.begin(IR_RECEIVE_PIN, ENABLE_LED_FEEDBACK);

   //exception bool afin de gerer les exceptions:
   exceptionActivated1=false;
   exceptionActivated2=false;

  
  }
  
void exception(){
  if(exceptionActivated1){Serial.println("Vitesse du moteur inferieure a la vitesse max");}
  if(exceptionActivated2){Serial.println("Vitesse du moteur inferieure a la vitesse min");}
  }
  
void loop() {
   MyirReceiver.processIR(&MyMotor, &MyServo1, &MyServo2);
    
    //bloc equivalent au try and catch pour gerer les exceptions de vitesse
    /*DcMotor M;
    M.setVitesse(-100);
    exception(); */
    
 }
 
