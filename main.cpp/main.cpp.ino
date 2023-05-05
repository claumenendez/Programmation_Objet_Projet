
#include "motor.hpp"
#include "ir_receiver.hpp"
#include "lcd.hpp"


//variables globales
const byte IR_RECEIVE_PIN = 9;
DcMotor MyMotor;
Receiver MyirReceiver(IR_RECEIVE_PIN);
Ecran MyEcran;

void setup() {
   
   MyMotor.setVitesse(100);
   IrReceiver.begin(IR_RECEIVE_PIN, ENABLE_LED_FEEDBACK);
   MyEcran.Afficher("DANGER MODE!");

  }

void loop() {
   MyirReceiver.processIR(&MyMotor);
 }
