#include <motion-controll.h>


void setup() {
    delay(5000);
    forwards(100, 1000);
    delay(2000);
    backwards(100, 1000);
    delay(2000);
    rotate_right(100, 1000);
    delay(2000);
    rotate_left(100,1000);
    delay(2000);
    right(100, 1000);
    delay(2000);
    left(100, 1000);
    delay(2000);
    curve_left_forwards(100,1000);
    delay(2000);
    curve_left_backwards(100, 1000);
    delay(2000);
    curve_right_forwards(100,1000);
    delay(2000);
    curve_right_backwards(100,1000);
    delay(2000);
}

void loop() {

}