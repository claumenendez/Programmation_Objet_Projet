#ifndef BUZZER_HPP 
#define BUZZER_HPP

#include "constante_buzzer.h"
#include "danger_mode.hpp"

//declaration de la classe Buzzer qui herite de la classe Danger Mode
class Buzzer:public DangerMode{
  protected:
    int pin;
  public:
    //constructeur & destructeur
    Buzzer(int p);
    ~Buzzer(){}
    
    //assesor
    int getPin(){return pin;} //assesor qui retourne le pin du buzzer
    
    //methodes
    void DangerModeActivation(String m); //methode qui fait sonner la musique souhaité du mode Danger
    
};

void playGameofThrones(); //fonction qui fait sonner la chanson de GofT (extraite du git suivant: https://musescore.com/user/8407786/scores/2156716)

#endif
