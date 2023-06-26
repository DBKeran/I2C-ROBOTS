#pragma once
#include <proximity-setup.h>

int proximity1()
{
  digitalWrite(TrigPin1, LOW);
  delayMicroseconds(2);
  digitalWrite(TrigPin1, HIGH);
  delayMicroseconds(10);
  digitalWrite(TrigPin1, LOW);
  elapsedTime1 = pulseIn(EchoPin1, HIGH);
  objectDistance1 = elapsedTime1 * 0.034 / 2;
  return objectDistance1;
}

int leftFront()
{
  digitalWrite(TrigPin1, LOW);
  delayMicroseconds(2);
  digitalWrite(TrigPin1, HIGH);
  delayMicroseconds(10);
  digitalWrite(TrigPin1, LOW);
  elapsedTime1 = pulseIn(EchoPin1, HIGH);
  objectDistance1 = elapsedTime1 * 0.034 / 2;
  return objectDistance1;
}

int proximity2()
{
  digitalWrite(TrigPin2, LOW);
  delayMicroseconds(2);
  digitalWrite(TrigPin2, HIGH);
  delayMicroseconds(10);
  digitalWrite(TrigPin2, LOW);
  elapsedTime2 = pulseIn(EchoPin2, HIGH);
  objectDistance2 = elapsedTime2 * 0.034 / 2;
  return objectDistance2;
}

int frontLeft()
{
  digitalWrite(TrigPin2, LOW);
  delayMicroseconds(2);
  digitalWrite(TrigPin2, HIGH);
  delayMicroseconds(10);
  digitalWrite(TrigPin2, LOW);
  elapsedTime2 = pulseIn(EchoPin2, HIGH);
  objectDistance2 = elapsedTime2 * 0.034 / 2;
  return objectDistance2;
}

int proximity3()
{
  digitalWrite(TrigPin3, LOW);
  delayMicroseconds(2);
  digitalWrite(TrigPin3, HIGH);
  delayMicroseconds(10);
  digitalWrite(TrigPin3, LOW);
  elapsedTime3 = pulseIn(EchoPin3, HIGH);
  objectDistance3 = elapsedTime3 * 0.034 / 2;
  return objectDistance3;
}

int rightFront()
{
  digitalWrite(TrigPin3, LOW);
  delayMicroseconds(2);
  digitalWrite(TrigPin3, HIGH);
  delayMicroseconds(10);
  digitalWrite(TrigPin3, LOW);
  elapsedTime3 = pulseIn(EchoPin3, HIGH);
  objectDistance3 = elapsedTime3 * 0.034 / 2;
  return objectDistance3;
}

int proximity4()
{
  digitalWrite(TrigPin4, LOW);
  delayMicroseconds(2);
  digitalWrite(TrigPin4, HIGH);
  delayMicroseconds(10);
  digitalWrite(TrigPin4, LOW);
  elapsedTime4 = pulseIn(EchoPin4, HIGH);
  objectDistance4 = elapsedTime4 * 0.034 / 2;
  return objectDistance4;
}

int frontRight()
{
  digitalWrite(TrigPin4, LOW);
  delayMicroseconds(2);
  digitalWrite(TrigPin4, HIGH);
  delayMicroseconds(10);
  digitalWrite(TrigPin4, LOW);
  elapsedTime4 = pulseIn(EchoPin4, HIGH);
  objectDistance4 = elapsedTime4 * 0.034 / 2;
  return objectDistance4;
}

int proximity5()
{
  digitalWrite(TrigPin5, LOW);
  delayMicroseconds(2);
  digitalWrite(TrigPin5, HIGH);
  delayMicroseconds(10);
  digitalWrite(TrigPin5, LOW);
  elapsedTime5 = pulseIn(EchoPin5, HIGH);
  objectDistance5 = elapsedTime5 * 0.034 / 2;
  return objectDistance5;
}

int backRight()
{
  digitalWrite(TrigPin5, LOW);
  delayMicroseconds(2);
  digitalWrite(TrigPin5, HIGH);
  delayMicroseconds(10);
  digitalWrite(TrigPin5, LOW);
  elapsedTime5 = pulseIn(EchoPin5, HIGH);
  objectDistance5 = elapsedTime5 * 0.034 / 2;
  return objectDistance5;
}

int proximity6()
{
  digitalWrite(TrigPin6, LOW);
  delayMicroseconds(2);
  digitalWrite(TrigPin6, HIGH);
  delayMicroseconds(10);
  digitalWrite(TrigPin6, LOW);
  elapsedTime6 = pulseIn(EchoPin6, HIGH);
  objectDistance6 = elapsedTime6 * 0.034 / 2;
  return objectDistance6;
}

int rightBack()
{
  digitalWrite(TrigPin6, LOW);
  delayMicroseconds(2);
  digitalWrite(TrigPin6, HIGH);
  delayMicroseconds(10);
  digitalWrite(TrigPin6, LOW);
  elapsedTime6 = pulseIn(EchoPin6, HIGH);
  objectDistance6 = elapsedTime6 * 0.034 / 2;
  return objectDistance6;
}

/*
int proximity7()
{
  digitalWrite(TrigPin7, LOW);
  delayMicroseconds(2);
  digitalWrite(TrigPin7, HIGH);
  delayMicroseconds(10);
  digitalWrite(TrigPin7, LOW);
  elapsedTime7 = pulseIn(EchoPin7, HIGH);
  objectDistance7 = elapsedTime7 * 0.034 / 2;
  return objectDistance7;
}

int backLeft()
{
  digitalWrite(TrigPin7, LOW);
  delayMicroseconds(2);
  digitalWrite(TrigPin7, HIGH);
  delayMicroseconds(10);
  digitalWrite(TrigPin7, LOW);
  elapsedTime7 = pulseIn(EchoPin7, HIGH);
  objectDistance7 = elapsedTime7 * 0.034 / 2;
  return objectDistance7;
}

int proximity8()
{
  digitalWrite(TrigPin8, LOW);
  delayMicroseconds(2);
  digitalWrite(TrigPin8, HIGH);
  delayMicroseconds(10);
  digitalWrite(TrigPin8, LOW);
  elapsedTime8 = pulseIn(EchoPin8, HIGH);
  objectDistance8 = elapsedTime8 * 0.034 / 2;
  return objectDistance8;
}

int leftBack()
{
  digitalWrite(TrigPin8, LOW);
  delayMicroseconds(2);
  digitalWrite(TrigPin8, HIGH);
  delayMicroseconds(10);
  digitalWrite(TrigPin8, LOW);
  elapsedTime8 = pulseIn(EchoPin8, HIGH);
  objectDistance8 = elapsedTime8 * 0.034 / 2;
  return objectDistance8;
}

*/