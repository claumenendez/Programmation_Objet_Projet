#ifndef LCD_HPP 
#define LCD_HPP

#include <LiquidCrystal.h>
#include "constants.h"


class Ecran {
  private:
    LiquidCrystal mylcd;
    String message;

  public:
    Ecran();
    Ecran(String m);
    void Afficher(String m);
};

#endif
