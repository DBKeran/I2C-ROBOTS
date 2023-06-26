#pragma once
#include <Arduino.h>
#include <HCSR04.h>
#include <Wire.h>

HCSR04 LF(2, 3);
HCSR04 FL(6, 7);
HCSR04 RF(4, 5);

byte proxAlert;

int leftFront(){
    if (LF.dist() > 5 and LF.dist() < 35){
        int dist = LF.dist();
        return dist;
    }
    else return 0; 
}

int frontLeft(){
    if (FL.dist() > 5 and FL.dist() < 35){
        int dist = FL.dist();
        return dist;
    }
    else return 0;
}

int rightFront(){
    if (RF.dist() > 5 and RF.dist() < 35){
        int dist = RF.dist();
        return dist;
    }
    else return 0;
}