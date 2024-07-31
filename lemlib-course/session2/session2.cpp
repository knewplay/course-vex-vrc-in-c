#include <iostream>

// path file name is "example.txt".
ASSET(example_txt);
ASSET(example2_txt);

void autonomous() {
    // set chassis pose
    chassis.setPose(0, 0, 0);
    // lookahead distance: 15 inches
    // timeout: 2000 ms
    chassis.follow(example_txt, 15, 2000);
    // follow the next path, but with the robot going backwards
    chassis.follow(example2_txt, 15, 2000, false);
}