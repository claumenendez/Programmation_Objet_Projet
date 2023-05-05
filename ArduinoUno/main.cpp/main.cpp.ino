
#include "motor.hpp"
#include "ir_receiver.hpp"




//variables globales
const byte IR_RECEIVE_PIN = 9;
DcMotor MyMotor;
Receiver MyirReceiver(IR_RECEIVE_PIN);


void setup() {
  Serial.begin(9600);
   pinMode(11,OUTPUT);
 
   //digitalWrite(PinBuz,LOW);
   pinMode(PinLcd,OUTPUT);
   digitalWrite(PinLcd,LOW);
   pinMode(PinLed,OUTPUT);
   digitalWrite(PinLed,LOW);
   
   MyMotor.setVitesse(100);
   IrReceiver.begin(IR_RECEIVE_PIN, ENABLE_LED_FEEDBACK);

  }

void loop() {
   //MyirReceiver.processIR(&MyMotor);
   digitalWrite(11,HIGH);
 }
