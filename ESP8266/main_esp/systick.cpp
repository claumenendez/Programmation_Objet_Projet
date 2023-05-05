#include "systick.hpp"

void Systick::start_sys(unsigned long interval, void (*callback)()) {
  ticker.attach(interval/ 1000.0, callback);  // interval to seconds
}

void Temporizador::stop_sys() {
  ticker.detach();
}
