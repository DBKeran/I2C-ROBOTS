#pragma once
#include <Arduino.h>

class m2r2motor
{
public:
        m2r2motor(int dir[], int stepp[], int n);               // Class initialization (dir pin, step pin, number of motors)
        ~m2r2motor();                                           // Destructor
        void forwards(int speed, int steps) const;              // Move robot forwards (speed of the motor, number of steps for steppers)
        void backwards(int speed, int steps) const;             
        void leftwards(int speed, int steps) const;             
        void rightwards(int speed, int steps) const;             
        void rotateLeft(int speed, int steps) const;             
        void rotateRight(int speed, int steps) const;            
        void curveLeft(int speed, int steps) const;             
        void curveRight(int speed, int steps) const;             
        void backCurveLeft(int speed, int steps) const;           
        void backCurveRight(int speed, int steps) const;     

private: 
        void init(int dir[], int stepp[], int n);                   // For Constructor
        int *dir;                                                // motor direction pin
        int *stepp;                                              // motor step pin
        int n;                                                  // number of motors
        int speed;                                              // motor speed from 0 to 100
        int steps;                                              // number of steps to take for stepper motors
};
