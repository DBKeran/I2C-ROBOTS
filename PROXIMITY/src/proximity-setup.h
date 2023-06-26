#pragma once
#include <Arduino.h>

#define TrigPin1 8
#define EchoPin1 7
#define TrigPin2 6
#define EchoPin2 5
#define TrigPin3 10
#define EchoPin3 9
#define TrigPin4 12
#define EchoPin4 11
#define TrigPin5 4
#define EchoPin5 3
#define TrigPin6 2
#define EchoPin6 13


int objectDistance1;
long elapsedTime1;
int objectDistance2;
long elapsedTime2;
int objectDistance3;
long elapsedTime3;
int objectDistance4;
long elapsedTime4;
int objectDistance5;
long elapsedTime5;
int objectDistance6;
long elapsedTime6;

void proximity_setup() {
    pinMode(EchoPin1, INPUT);
    pinMode(TrigPin1, OUTPUT);
    pinMode(EchoPin2, INPUT);
    pinMode(TrigPin2, OUTPUT);
    pinMode(EchoPin3, INPUT);
    pinMode(TrigPin3, OUTPUT);
    pinMode(EchoPin4, INPUT);
    pinMode(TrigPin4, OUTPUT);
    pinMode(EchoPin5, INPUT);
    pinMode(TrigPin5, OUTPUT);
    pinMode(EchoPin6, INPUT);
    pinMode(TrigPin6, OUTPUT);
}
