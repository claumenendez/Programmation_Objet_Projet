#include "motor.hpp"

DcMotor:: DcMotor(){
  Vitesse=0;
  pinMode(PIN_Motor_STBY, OUTPUT);
  pinMode(PIN_Motor_PWMA, OUTPUT);
  pinMode(PIN_Motor_PWMB, OUTPUT);
  pinMode(PIN_Motor_AIN_1, OUTPUT);
  pinMode(PIN_Motor_BIN_1, OUTPUT);
  digitalWrite(PIN_Motor_STBY, HIGH);
  analogWrite(PIN_Motor_PWMA, Vitesse);}

DcMotor::DcMotor(int s){
      if(s>speed_Max){Vitesse=speed_Max;}
      else if (s<0){Vitesse=0;}
      else{Vitesse=s;}
      pinMode(PIN_Motor_STBY, OUTPUT);
      pinMode(PIN_Motor_PWMA, OUTPUT);
      pinMode(PIN_Motor_PWMB, OUTPUT);
      pinMode(PIN_Motor_AIN_1, OUTPUT);
      pinMode(PIN_Motor_BIN_1, OUTPUT);
      digitalWrite(PIN_Motor_STBY, HIGH);
      analogWrite(PIN_Motor_PWMA, Vitesse);}

void DcMotor::setVitesse(int s){
  if(s>speed_Max){Vitesse=speed_Max;}
  else if (s<0){Vitesse=0;}
  else{Vitesse=s;}
  //analogWrite(PIN_Motor_PWMA, Vitesse);
  }

int DcMotor::getVitesse(){return Vitesse;}


void DcMotor::TournerGauche(){
  digitalWrite(PIN_Motor_STBY, HIGH);
  digitalWrite(PIN_Motor_AIN_1, HIGH);
  digitalWrite(PIN_Motor_BIN_1, LOW);
  analogWrite(PIN_Motor_PWMA, getVitesse());
  analogWrite(PIN_Motor_PWMB, getVitesse());
  }
void DcMotor::TournerDroite(){
  digitalWrite(PIN_Motor_STBY, HIGH);
  digitalWrite(PIN_Motor_AIN_1, LOW);
  digitalWrite(PIN_Motor_BIN_1, HIGH);
  analogWrite(PIN_Motor_PWMA, getVitesse());
  analogWrite(PIN_Motor_PWMB, getVitesse());
  }

void DcMotor::AllStraight(){
  digitalWrite(PIN_Motor_STBY, HIGH);
  digitalWrite(PIN_Motor_AIN_1, HIGH);
  digitalWrite(PIN_Motor_BIN_1, HIGH);
  analogWrite(PIN_Motor_PWMA, getVitesse());
  analogWrite(PIN_Motor_PWMB, getVitesse());
  Serial.println("ssss");
  }
void DcMotor::stopMotor(){
  setVitesse(0);
  digitalWrite(PIN_Motor_STBY, LOW);
  digitalWrite(PIN_Motor_AIN_1, LOW);
  digitalWrite(PIN_Motor_BIN_1, LOW);
  }
void DcMotor::Demarrer(){
  setVitesse(100);
  digitalWrite(PIN_Motor_STBY, HIGH);
  digitalWrite(PIN_Motor_AIN_1, HIGH);
  digitalWrite(PIN_Motor_BIN_1, HIGH);  
  }
