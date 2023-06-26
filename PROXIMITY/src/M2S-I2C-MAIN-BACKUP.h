#include <M2S-wallFollower.h>

#define ADDRESS_ME 0x1
#define ADDRESS_MOTOR 0x2
#define ADDRESS_LINE 0x3

void send();
void maze(int howMany);

void setup() {
    //Serial.begin(9600);
    Wire.begin(ADDRESS_ME);
    Wire.onReceive(maze);
}

void loop() {
    // Fallow the wall on the left
    if(FL.dist() < 10){
        proxAlert = 3;  // 90° Turn to the Right
        send();
        delay(260);
    }

    else if(LF.dist() < 10){
        proxAlert = 2;  // Turn away from the wall (curve right)
        send();
        delay(260);
    }
    else {
        proxAlert = 1;  // Turn towards the wall (curve left)
        send();
        delay(260);
    }
}

void maze(int howMany) {
    /*while (Wire.available() > 0) {
        char c = Wire.read();
        Serial.print(c);
    }
    Serial.println();*/
}

void send() {
    delay(50);
    Wire.beginTransmission(ADDRESS_MOTOR);
    Wire.write(proxAlert);
    Wire.endTransmission();
}
