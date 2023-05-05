#ifndef RECEIVER_HPP 
#define RECEIVER_HPP

//LIBRARIES
#include <IRremote.h>
#include "constants.h"

class Receiver{
  private:
    IRrecv  IrReceiver;
    byte pin;
  public:
    //constructor 
    Receiver(byte pin);

    //methods
    void processIR(DcMotor * MyMotor);
  };

#endif
