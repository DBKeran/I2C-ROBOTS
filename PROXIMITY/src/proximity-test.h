#pragma once
#include <proximity-reading.h>

void identify_proximity_sensor(int sensor_number) {

    switch (sensor_number)
    {
    case 1:
        {
        int prox1 = proximity1();
        Serial.print("Proximity Sensor 1: ");
        Serial.println(prox1);
        delay(20);
        break;
        }
    case 2:
        {
        int prox2 = proximity2();
        Serial.print("Proximity Sensor 2: ");
        Serial.println(prox2);
        delay(20);
        break;
        }
    case 3:
        {
        int prox3 = proximity3();
        Serial.print("Proximity Sensor 3: ");
        Serial.println(prox3);
        delay(20);
        break;
        }
    case 4:
        {
        int prox4 = proximity4();
        Serial.print("Proximity Sensor 4: ");
        Serial.println(prox4);
        delay(20);
        break;
        }
    case 5:
        {
        int prox5 = proximity5();
        Serial.print("Proximity Sensor 5: ");
        Serial.println(prox5);
        delay(20);
        break;
        }
    case 6:
        {
        int prox6 = proximity6();
        Serial.print("Proximity Sensor 6: ");
        Serial.println(prox6);
        delay(20);
        break;
        }
    }
}