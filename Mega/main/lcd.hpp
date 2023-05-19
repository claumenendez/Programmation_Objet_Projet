#ifndef LCD_HPP 
#define LCD_HPP

#include <LiquidCrystal.h>
#include "danger_mode.hpp"

//creation de la classe ecran (faisant reference a un ecran lcd) qui herite de la classe abstraite DangerMode
class Ecran: public DangerMode {
  private:
    LiquidCrystal mylcd;
    String message;

  public:
    //constructeur &destructeur
    Ecran();
    Ecran(String m);
    ~Ecran(){}
    
    //methods
    void DangerModeActivation(String m); //methode qui affiche sur un ecran le message souhaité
    void clear(){mylcd.clear();} //methode qui efface l'ecran lcd
    
};

#endif
