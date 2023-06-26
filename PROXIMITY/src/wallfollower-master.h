#pragma once
#include <Arduino.h>
#include <setup.h>
#include <Wire.h>

void send();
byte proxAlert;

void leftWall() {
  // Fallow the wall on the left
  if(frontLeft() < 8){
    proxAlert = 7;  // 90° Turn to the Right
    //send();
  }
  
  if(leftFront() < 8){
    proxAlert = 8;  // Turn away from the wall (curve right)
    //send();
  }
  else if (leftFront() > 20){
    proxAlert = 6;  // Turn towards the wall (curve left)
    //send();
  }
  else{
    proxAlert = 5;  // Move forwards
    //send();
  }
}

void rightWall() {
  if(frontRight() < 8){
    proxAlert = 4;  // 90° Turn to the Left
    send();
  }
  
  if(rightFront() < 8){
    proxAlert = 5;  // Turn away from the wall (curve left)
    send();
  }
  else if (leftFront() > 20){
    proxAlert = 6;  // Turn towards the wall (curve right)
    send();
  }
  else{
    proxAlert = 3;  // Move forwards
    send();
  }
  
}

// Sends a signal through I2C via adress 1
void send() {
  Wire.beginTransmission(1);
  Wire.write(proxAlert);
  Wire.endTransmission();
  delayMicroseconds(10);
}
