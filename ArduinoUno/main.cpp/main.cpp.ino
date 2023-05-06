
#include "motor.hpp"
#include "ir_receiver.hpp"
#include <Servo.h>


//variables globales
const byte IR_RECEIVE_PIN = 9;
DcMotor MyMotor;
Receiver MyirReceiver(IR_RECEIVE_PIN);
Servo MyServo1;
Servo MyServo2;


void setup() {
   Serial.begin(9600);

   //servo 
   pinMode(PinServo1,OUTPUT);
   MyServo1.attach(PinServo1);
   MyServo1.write(0);
   pinMode(PinServo2,OUTPUT);
   MyServo2.attach(PinServo2);
   MyServo2.write(0);
   //digitalWrite(PinBuz,LOW);
   //pinMode(PinLcd,OUTPUT);
   //digitalWrite(PinLcd,LOW);
   //pinMode(PinLed,OUTPUT);
   //digitalWrite(PinLed,LOW);
   MyMotor.setVitesse(100);
   IrReceiver.begin(IR_RECEIVE_PIN, ENABLE_LED_FEEDBACK);

  
  }

void loop() {
   MyirReceiver.processIR(&MyMotor, &MyServo1, &MyServo2);
   //digitalWrite(11,HIGH);

   
 }
