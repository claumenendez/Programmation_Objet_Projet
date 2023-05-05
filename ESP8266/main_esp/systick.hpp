#ifndef SYSTICK_HPP
#define SYSTICK_HPP

#include <ESP8266WiFi.h>
#include <Ticker.h>

class Systick {
  private:
    Ticker ticker;
  public:
    void start_sys(unsigned long interval, void (*callback)());
    void stop_sys();


};

#endif  
