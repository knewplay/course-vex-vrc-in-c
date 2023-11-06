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

# Discussion

* How would you declare a sensor for a motor if it was connected to port 5?

# Demo

* Let's connect some sensors to our V5 and make a header file that declares all of them