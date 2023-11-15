# **Session 5: Using VEX Sensors and Motors in PROS**

---

## Goals

* How to initialize and configure any sensor in VEX for our robot
* How to read and write to sensors in order to control our robot
* How to make our robot autonomous

---

## Declaring our Sensors

* To use any sensor in VEX using PROS, we first need to declare the port it is connected to in our C program.
* Recall our VEX V5 has 21 ports, and we can connect our sensor to any port.
* Clean and simple way: ```#define SENSOR_1 11```
* ```SENSOR_1``` can now be used to reference our sensor connected to port 11
* Put all sensor declarations in header file for better organization

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

---

## Discussion

* Can you explain in your own word what the three main PROS functions are, and what their purpose is?

---

## Demo

* Now let's take a look at how we used the three functions in our clawbot.

---

## Controlling Our Robot With Sensors Using the PROS API

* We want to create a loop in our ```opcontrol()``` function which will always be running
* Inside the loop we put our PROS API functions to control the motors and sensors
* Example: ```motor_move_velocity(WHEELS, 100)```

---

## Discussion

* What would happen if we didn't have ```while (true)``` in our ```opcontrol()``` function?

---

## Demo

* Let's now see what functions we can use in our opcontrol() function to modify the behaviour of our robot
* We will control the motors and also briefly look at the vision sensor

---

## Making Our Robot Autonomous

* To move our robot without using our controller, we simply put code in our ```autonomous()``` function

---

## Discussion

* What sensors do you think we should control in our ```autonomous()``` function?

---

## Demo

* Let's step through the code for autonomous and see what functions we can add to it through the PROS API

---
