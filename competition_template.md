---
marp: true
---

# **PROS Competition Template**

---

## Why Templates?

* PROS has a template structure that contains the functions ``void initialize()``, ``void opcontrol()``, ``void autonomous()``
* Aligns with VEX competition rules and structure
* Better debug and ease of implementation
* DRY: Don't Repeat Yourself principle

## Vex Rules

* Robot must respond to commands from the "VEX field controller":

  - Robot becomes autonmous when autonomous mode is enabled
  - Should do driver control during manual mode

* PROS follows these rules so it is competition legal
* Not following the above rules in disqualification

## Vex Autonomous Mode

* Helps us organize our code during the user controlled and autonomous period
* During autonomous phase of the competition, all of our code will go inside ``void autonomous()``
* Easier to debug, update, understand

## Vex Initialize

* Can configure motors and other sensors in ``void initialize()``


## Opcontrol Example

```
#define LEFT_WHEELS_PORT 1
#define RIGHT_WHEELS_PORT 10

void opcontrol() {
  while (true) {
    int left = controller_get_analog(CONTROLLER_MASTER, ANALOG_LEFT_Y);
    int right = controller_get_analog(CONTROLLER_MASTER, ANALOG_RIGHT_Y);
    right *= -1; // This will reverse the right motor
    motor_move(LEFT_WHEELS_PORT, left);
    motor_move(RIGHT_WHEELS_PORT, right);

    delay(2);
  }
}
```

## Autonomous Example

```

void autonomous() {
  motor_move_relative(LEFT_WHEELS_PORT, 1000, MOTOR_MAX_SPEED);
  motor_move_relative(RIGHT_WHEELS_PORT, -1000, MOTOR_MAX_SPEED);
}

```