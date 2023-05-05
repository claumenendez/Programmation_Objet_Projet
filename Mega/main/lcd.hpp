#ifndef LCD_HPP 
#define LCD_HPP

#include <LiquidCrystal.h>
#include "danger_mode.hpp"

class Ecran: public DangerMode {
  private:
    LiquidCrystal mylcd;
    String message;

  public:
    Ecran();
    Ecran(String m);
    void DangerModeActivation(String m);
};

#endif
