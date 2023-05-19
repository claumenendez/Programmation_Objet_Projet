#ifndef DANGERMODE_HPP 
#define DANGERMODE_HPP
#include <Arduino.h>

#define buz 22

//creation de la classe abstraite DangerMode qui inclu les differents capteurs qui seront acctives si cette fonctionnalité est demande par l'utilisateur
class DangerMode{
  public:
    virtual void DangerModeActivation(String m);
    };

#endif
