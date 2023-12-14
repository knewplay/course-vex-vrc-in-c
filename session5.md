# **Session 5: Using VEX Sensors and Motors in PROS**

---

## Goals

<!-- Notes: Students should be able to write basic code to control a wheeled robot after this lesson -->
* How to initialize and configure any sensor in VEX for our robot
* How to read and write to sensors in order to control our robot
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
* ```SENSOR_1``` can now be used to reference our sensor connected to port 11
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

---

## Discussion

* Can you explain in your own words what the three main PROS functions are, and what their purpose is?

---

## Demo

* Now let's take a look at how we used the three functions in our clawbot.
<!-- Notes: During this process, take opportunity to show students the PROS API and functions we can use and experiment with from there -->

---

## Controlling Our Robot With Sensors Using the PROS API

* We want to create a loop in our ```opcontrol()``` function which will always be running while the robot is on
* Inside the loop we put our PROS API functions to control the motors and sensors
* Example: ```motor_move_velocity(WHEELS, 100)```
* For our clawbot, the arm, claw, and wheels connected to motors that we control with code using PROS API

---

## Discussion

* What would happen if we didn't have ```while (true)``` in our ```opcontrol()``` function?

---

## Demo

* Let's now see what functions we can use in our opcontrol() function to modify the behaviour of our robot
* We will control the motors and also briefly look at the vision sensor

---

## Making Our Robot Autonomous

* To move our robot without using our controller, put code in our ```autonomous()``` function
* Select the autonomous mode from our VEX V5 controller
<!-- Notes 

- Can use any part of PROS API in autonomous that doesn't involve reading controller input. For example, ```move_relative_velocity()```
- Show students how to make robot move autonomously, and how robot entirely reliant on sensors

-->

---

## Discussion

* In autonomous mode, you cannot increase speed by pushing the joystick harder. How do you think we could vary the speed using code in our `autonomous()` function?
<!-- Students should understand that you need to control speed through PROS functions when in autonomous mode -->

---

# Demo

* Let's step through the code for autonomous and see what functions we can add to it through the PROS API

---
