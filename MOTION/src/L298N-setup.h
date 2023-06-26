#pragma once
#include <Arduino.h>

#define M1_SPEED 5
#define M1_IN1 6
#define M1_IN2 7

#define M2_SPEED 10
#define M2_IN1 8
#define M2_IN2 9

void motorSetup() {
    pinMode(M1_SPEED, OUTPUT);
    pinMode(M1_IN1, OUTPUT);
    pinMode(M1_IN2, OUTPUT);
    pinMode(M2_SPEED, OUTPUT);
    pinMode(M2_IN1, OUTPUT);
    pinMode(M2_IN2, OUTPUT);
}

void identifyMotor(int MOTOR_NUMBER) {
    switch (MOTOR_NUMBER)
    {
        case 0:
            // STARTS MOTOR 1
            digitalWrite(M1_IN1, HIGH);
            digitalWrite(M1_IN2, LOW);
            analogWrite(M1_SPEED, 255);
            delay(2000);

            // STOPS MOTOR 1
            digitalWrite(M1_IN1, LOW);

            // STARTS MOTOR 2
            digitalWrite(M2_IN1, HIGH);
            digitalWrite(M2_IN2, LOW);
            analogWrite(M2_SPEED, 255);
            delay(2000);

            // STOPS MOTOR 2
            digitalWrite(M2_IN1, LOW);

            break;
        case 1:
            // STARTS MOTOR 1
            digitalWrite(M1_IN1, HIGH);
            digitalWrite(M1_IN2, LOW);
            analogWrite(M1_SPEED, 255);
            delay(2000);

            // STOPS MOTOR 1
            digitalWrite(M1_IN1, LOW);;
            break;
        case 2:
            // STARTS MOTOR 2
            digitalWrite(M2_IN1, HIGH);
            digitalWrite(M2_IN2, LOW);
            analogWrite(M2_SPEED, 255);
            delay(2000);

            // STOPS MOTOR 2
            digitalWrite(M2_IN1, LOW);
            break;
        default:
            break;
    }
}

void stop(){
    digitalWrite(M1_IN1, LOW);
    digitalWrite(M1_IN2, LOW);
    digitalWrite(M2_IN1, LOW);
    digitalWrite(M2_IN2, LOW);
    delay(50);
}

void go(int LEFT_MOTOR_SPEED, int RIGHT_MOTOR_SPEED){   
    int LMS;
    int RMS;
    if (LEFT_MOTOR_SPEED >= 10 and LEFT_MOTOR_SPEED <= 100 and RIGHT_MOTOR_SPEED >= 10 and RIGHT_MOTOR_SPEED <= 100){
        LMS = map(LEFT_MOTOR_SPEED, 10, 100, 50, 255);
        RMS = map(RIGHT_MOTOR_SPEED, 10, 100, 50, 255);

        // FORWARDS
        digitalWrite(M1_IN1, HIGH);
        digitalWrite(M1_IN2, LOW);
        digitalWrite(M2_IN1, HIGH);
        digitalWrite(M2_IN2, LOW);

        analogWrite(M1_SPEED, 255);
        analogWrite(M2_SPEED, 255);
        delay(10);

        analogWrite(M1_SPEED, LMS);
        analogWrite(M2_SPEED, RMS);
    }
    else if (LEFT_MOTOR_SPEED >= 10 and LEFT_MOTOR_SPEED <= 100 and RIGHT_MOTOR_SPEED <= -10 and RIGHT_MOTOR_SPEED >= -100){
        LMS = map(LEFT_MOTOR_SPEED, 10, 100, 50, 255);
        RMS = map(RIGHT_MOTOR_SPEED, -10, -100, 50, 255);

        // RIGHT
        digitalWrite(M1_IN1, HIGH);
        digitalWrite(M1_IN2, LOW);
        digitalWrite(M2_IN1, LOW);
        digitalWrite(M2_IN2, HIGH);

        analogWrite(M1_SPEED, 255);
        analogWrite(M2_SPEED, 255);
        delay(10);

        analogWrite(M1_SPEED, LMS);
        analogWrite(M2_SPEED, RMS);
    }
    else if (LEFT_MOTOR_SPEED <= -10 and LEFT_MOTOR_SPEED >= -100 and RIGHT_MOTOR_SPEED >= 10 and RIGHT_MOTOR_SPEED <= 100){
        LMS = map(LEFT_MOTOR_SPEED, -10, -100, 50, 255);
        RMS = map(RIGHT_MOTOR_SPEED, 10, 100, 50, 255);

        // LEFT
        digitalWrite(M1_IN1, LOW);
        digitalWrite(M1_IN2, HIGH);
        digitalWrite(M2_IN1, HIGH);
        digitalWrite(M2_IN2, LOW);

        analogWrite(M1_SPEED, 255);
        analogWrite(M2_SPEED, 255);
        delay(10);

        analogWrite(M1_SPEED, LMS);
        analogWrite(M2_SPEED, RMS);
    }
    else if (LEFT_MOTOR_SPEED <= -10 and LEFT_MOTOR_SPEED >= -100 and RIGHT_MOTOR_SPEED <= -10 and RIGHT_MOTOR_SPEED >= -100){
        LMS = map(LEFT_MOTOR_SPEED, -10, -100, 50, 255);
        RMS = map(RIGHT_MOTOR_SPEED, -10, -100, 50, 255);

        // BACKWARDS
        digitalWrite(M1_IN1, LOW);
        digitalWrite(M1_IN2, HIGH);
        digitalWrite(M2_IN1, LOW);
        digitalWrite(M2_IN2, HIGH);
        
        analogWrite(M1_SPEED, 255);
        analogWrite(M2_SPEED, 255);
        delay(10);

        analogWrite(M1_SPEED, LMS);
        analogWrite(M2_SPEED, RMS);
    }
    else
        stop();
}

