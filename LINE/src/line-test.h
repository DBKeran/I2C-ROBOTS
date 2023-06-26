#pragma once
#include <Arduino.h>
#include <line-reader.h>

void testLine() {
    Serial.print(readLine0());
    Serial.print(" ");
    Serial.print(readLine1());
    Serial.print(" ");
    Serial.print(readLine2());
    Serial.print(" ");
    Serial.print(readLine3());
    Serial.print(" ");
    Serial.println(readLine4());
    delay(100);
}
