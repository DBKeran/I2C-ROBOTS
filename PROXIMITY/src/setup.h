#pragma once
#include <Arduino.h>
#include <HCSR04.h>

HCSR04 LF(6, 2);
HCSR04 FL(6, 3);
HCSR04 RF(6, 4);
HCSR04 FR(6, 5);

HCSR04 BR(11, 7);
HCSR04 RB(11, 8);
HCSR04 BL(11, 9);
HCSR04 LB(11, 10);

int leftFront(){
    if (LF.dist() > 5 and LF.dist() < 35){
        int dist = LF.dist();
        return dist;
    }
}

int frontLeft(){
    if (FL.dist() > 5 and FL.dist() < 35){
        int dist = FL.dist();
        return dist;
    }
}

int rightFront(){
    if (RF.dist() > 5 and RF.dist() < 35){
        int dist = RF.dist();
        return dist;
    }
}

int frontRight(){
    if (FR.dist() > 5 and FR.dist() < 35){
        int dist = FR.dist();
        return dist;
    }
}

int backRight(){
    if (BR.dist() > 5 and BR.dist() < 35){
        int dist = BR.dist();
        return dist;
    }
}

int rightBack(){
    if (RB.dist() > 5 and RB.dist() < 35){
        int dist = RB.dist();
        return dist;
    }
}

int leftBack(){
    if (LB.dist() > 5 and LB.dist() < 35){
        int dist = LB.dist();
        return dist;
    }
}

int backLeft(){
    if (BL.dist() > 5 and BL.dist() < 35){
        int dist = BL.dist();
        return dist;
    }
}
