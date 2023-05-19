#ifndef MYMOTOR_HPP 
#define MYMOTOR_HPP

//LIBRARIES
#include<Servo.h>
#include <Arduino.h>
#include "constants.h"

//creation de la classe DC Motor qui permet le mouvement du char

class DcMotor{
   protected:
    int Vitesse;
   public:
   
   //constructors
    DcMotor();
    DcMotor(int s);
      
    //assesors
    void setVitesse(int s);
    int getVitesse();

    //methods
    void TournerGauche(); //fonction qui permet de tourner à gauche
    void TournerDroite(); //fonction qui permet de tourner à droite
    void AllStraight(); //fonction qui permet d'aller tout droit
    void stopMotor(); // fonction qui permet d'arreter la base roulante
    void Demarrer(); //fonction qui permet de demarrer la base roulante une fois avoir ete arrete
    void addVitesse(int v);
    //operator's redefinition
    DcMotor operator+(int v) const ;
  };


#endif 
