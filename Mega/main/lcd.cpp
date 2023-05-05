#include "lcd.hpp"

Ecran::Ecran() : mylcd(12, 11, 5, 4, 3, 2) {
  message = "";
  mylcd.begin(16, 2);
  mylcd.setCursor(2, 0);
}

Ecran::Ecran(String m) : mylcd(12, 11, 5, 4, 3, 2) {
  message = m;
  mylcd.begin(16, 2);
  mylcd.setCursor(0, 0);
  mylcd.print(message);
}


void Ecran::DangerModeActivation(String m) {
    message = m;
    mylcd.print(m);
}
