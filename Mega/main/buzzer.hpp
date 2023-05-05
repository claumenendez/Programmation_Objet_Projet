#ifndef BUZZER_HPP 
#define BUZZER_HPP

#include "constante_buzzer.h"
#include "danger_mode.hpp"


class Buzzer:public DangerMode{
  protected:
    int pin;
  public:
    Buzzer(int p);
    int getPin(){return pin;}
    void DangerModeActivation(String m);
};
void playStarsWars();  
#endif
