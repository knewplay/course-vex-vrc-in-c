#include <stdio.h>
#include "main.h"

#define LEFT_WHEELS_PORT 21
#define RIGHT_WHEELS_PORT 11
#define MOTOR_MAX_SPEED 100

void initialize() {
  motor_set_gearing(ARM_PORT, MOTOR_GEARSET_36);
  motor_set_gearing(CLAW_PORT, MOTOR_GEARSET_36);
}

void autonomous() {
  motor_set_reversed(RIGHT_WHEELS_PORT, true);
  while (true) {
    //motor_move_relative(LEFT_WHEELS_PORT, 1000, MOTOR_MAX_SPEED);
    //motor_move_relative(RIGHT_WHEELS_PORT, -1000, MOTOR_MAX_SPEED);
    motor_move(LEFT_WHEELS_PORT, 30);
    motor_move(RIGHT_WHEELS_PORT, 30);
    delay(2);
}

void opcontrol() {
    while (true) {
        int power = controller_get_analog(CONTROLLER_MASTER, ANALOG_LEFT_Y);
        int turn = controller_get_analog(CONTROLLER_MASTER, ANALOG_RIGHT_X);
        int left = power + turn;
        int right = power - turn;
        right *= -1;
        motor_move(LEFT_WHEELS_PORT, left);
        motor_move(RIGHT_WHEELS_PORT, right);
        delay(2);
    }
}