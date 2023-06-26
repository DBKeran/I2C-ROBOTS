#include <proximity-test.h>

void setup() {
    Serial.begin(9600);
    proximity_setup();
}

void loop() {
    identify_proximity_sensor(6);
}
