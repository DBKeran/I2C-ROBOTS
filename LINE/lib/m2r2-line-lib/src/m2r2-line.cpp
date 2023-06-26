#include "m2r2-motor.h"
/////////////////////////////constructor/destructor
void m2r2motor::init(int dir[], int stepp[], int n)
{
  this->dir = dir;
  this->stepp = stepp;
  this->n = n;
  for (int i = 0; i < this->n; i++)
       pinMode(this->dir[i], OUTPUT);
  for (int i = 0; i < this->n; i++)
       pinMode(this->stepp[i], OUTPUT);
}
m2r2motor::m2r2motor(int dir[], int stepp[], int n) { this->init(dir, stepp, n); }
m2r2motor::~m2r2motor()
{
  ~*this->dir;
  ~*this->stepp;
  ~this->n;
}

void go(int speed, int steps){
  int inv_speed = map(speed, 1, 100, 5000, 0);

  for (int i = 0; i < steps; i++) 
    {
        for (int j = 0; j < this->n; j++) digitalWrite(stepp[j], HIGH);
        delayMicroseconds(800);
        for (int j = 0; j < this->n; j++) digitalWrite(stepp[j], LOW);   
        delayMicroseconds(800);
        delayMicroseconds(inv_speed);
    }
}

void m2r2motor::forwards(int speed, int steps) const
{   
    digitalWrite(this->dir[0], LOW);
    digitalWrite(this->dir[1], LOW);
    digitalWrite(this->dir[2], HIGH);
    digitalWrite(this->dir[3], HIGH);

    go(speed, steps);
}

void m2r2motor::backwards(int speed, int steps) const
{   
    digitalWrite(this->dir[0], HIGH);
    digitalWrite(this->dir[1], HIGH);
    digitalWrite(this->dir[2], LOW);
    digitalWrite(this->dir[3], LOW);
  
    go(speed, steps);
}

void m2r2motor::leftwards(int speed, int steps) const
{   
    digitalWrite(this->dir[0], HIGH);
    digitalWrite(this->dir[1], LOW);
    digitalWrite(this->dir[2], HIGH);
    digitalWrite(this->dir[3], LOW);
  
    go(speed, steps);
}

void m2r2motor::rightwards(int speed, int steps) const
{   
    digitalWrite(this->dir[0], LOW);
    digitalWrite(this->dir[1], HIGH);
    digitalWrite(this->dir[2], LOW);
    digitalWrite(this->dir[3], HIGH);
  
    go(speed, steps);
}

void m2r2motor::rotateLeft(int speed, int steps) const
{   
    digitalWrite(this->dir[0], HIGH);
    digitalWrite(this->dir[1], LOW);
    digitalWrite(this->dir[2], LOW);
    digitalWrite(this->dir[3], HIGH);
  
    go(speed, steps);
}

void m2r2motor::rotateRight(int speed, int steps) const
{   
    digitalWrite(this->dir[0], LOW);
    digitalWrite(this->dir[1], HIGH);
    digitalWrite(this->dir[2], HIGH);
    digitalWrite(this->dir[3], LOW);
  
    go(speed, steps);
}

void m2r2motor::curveLeft(int speed, int steps) const
{   
    digitalWrite(this->dir[1], LOW);
    digitalWrite(this->dir[3], HIGH);
  
    go(speed, steps);
}

void m2r2motor::curveRight(int speed, int steps) const
{   
    digitalWrite(this->dir[0], LOW);
    digitalWrite(this->dir[2], HIGH);
  
    go(speed, steps);
}

void m2r2motor::backCurveLeft(int speed, int steps) const
{   
    digitalWrite(this->dir[1], HIGH);
    digitalWrite(this->dir[3], LOW);
  
    go(speed, steps);
}

void m2r2motor::backCurveRight(int speed, int steps) const
{   
    digitalWrite(this->dir[0], HIGH);
    digitalWrite(this->dir[2], LOW);
  
    go(speed, steps);
}
