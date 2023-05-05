#ifndef DANGERMODE_HPP 
#define DANGERMODE_HPP
#include <Arduino.h>

#define buz 11
class DangerMode{
  public:
    virtual void DangerModeActivation(String m);
    };

#endif
