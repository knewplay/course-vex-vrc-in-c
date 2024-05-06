# **Session 5: Sensors and Motors**

---

## Goals

<!-- Notes: Students should be able to write basic code to control a wheeled robot after this lesson -->
* How to initialize and configure any sensor in VEX for our robot
* How to read and write to sensors and motors using PROS API
* How to make our robot autonomous

---

## Declaring our Sensors

<!-- Notes: 

- Make sure students understand port is just a way to inferface to sensor 
- Tell students VEX V5 has 21 ports, and we can connect our sensor to any port.
- If you connect sensor to port 10, you then send data to port 10, or use port 10 as input to functions in order to control the sensor

-->

* To use any sensor in VEX using PROS, we first need to declare the port it is connected to in our C program.
* Clean and simple way: ```#define SENSOR_1 11``` in `main.c` or a header file

* Put sensor declarations in header file for better organization

---

## Discussion

* How would you declare a sensor for a motor if it was connected to port 5?

---

## Demo

* Let's connect some sensors to our V5 and make a header file that declares all of them

---

## Initializing our Sensors

* Recall that our three main PROS functions are ```initialize()```, ```opcontrol()```, and ```autonomous()```
* Sometimes we have to do extra setup for our sensors or motors, and it is done in the ```intialize()``` function
* For example, if our motor is going to rotate gears, we have to declare what type of gears we are using
<!-- Notes: Give brief description of gear ratio and why it's important -->
<!-- Illustration idea: 

An image with all the different types of VEX gears with their gear ratios, benefits, and trade offs

-->
![Gears](./gears.jpg)
---

## Discussion

* Can you explain in your own words what the three main PROS functions are, and what their purpose is?

---


## Controlling Our Robot With Sensors Using the PROS API

* We want to create a loop in our ```opcontrol()``` function which will always be running while the robot is on
* Inside the loop we put our PROS API functions to control the motors and sensors
* Example: ```motor_move_velocity(WHEELS, 100)```

---

## Discussion

* What would happen if we didn't have ```while (true)``` in our ```opcontrol()``` function?

---

## Making Our Robot Autonomous

* To move our robot without using our controller, put code in our ```autonomous()``` function
* Select the autonomous mode from our VEX V5 controller
<!-- Notes 

- Can use any part of PROS API in autonomous that doesn't involve reading controller input. For example, ```move_relative_velocity()```
- Show students how to make robot move autonomously, and how robot entirely reliant on sensors

-->

---

## Demo

* Now let's take a look at how we used the three functions in our clawbot.
* Let's also step through the code for autonomous and see what functions we can add to it through the PROS API
<!-- Notes: During this process, take opportunity to show students the PROS API and functions we can use and experiment with from there -->

---

## Controlling Motors with PROS

* Many ways to do movement with motors
* Some better for autonomous mode, some better for user mode

---

## Initializing our Motors
<!--Notes: Standard way to do this: 

#define MOTOR_PORT 1

void initialize() {
  motor_set_gearing(MOTOR_PORT, E_MOTOR_GEARSET_18);
  motor_set_reversed(MOTOR_PORT, true);
  motor_set_encoder_units(MOTOR_PORT, E_MOTOR_ENCODER_DEGREES);
}
-->
* We must setup our motors in the `initialize()` function
* Setup means to specify gearset and encoder units the motor controls

---

## Demo

* Let's see how to initialize our motor in PROS

---

## Motor Functions for Autonomous Mode

<!-- Notes:

#define MOTOR_PORT 1
#define MOTOR_MAX_SPEED 100 // The motor has the 36 Gearset

void autonomous() {
  motor_move_relative(MOTOR_PORT, 1000, MOTOR_MAX_SPEED);
  // This will move 1000 ticks forward
  motor_move_relative(MOTOR_PORT, 1000, MOTOR_MAX_SPEED);
  // This moves an additional 1000 ticks forward
  motor_move_absolute(MOTOR_PORT, 1000, MOTOR_MAX_SPEED);
  // This moves 1000 ticks backwards to the 1000 tick position
}
-->
* In PROS, we have specific functions for moving motors in autonomous mode
* `motor_move_absolute()` and `motor_move_relative()`

---

## Demo

* Let's see how to use these functions in autonomous mode
* Let's have our robot now detect the green triball using the vision sensor, and autonomously move towards it

---
