---
marp: true
---

# **Session 6: More on Sensors**

---

## Goals

* Understand VEX Vision Sensor
* How to use the PROS API to program VEX sensors

---

## Overview of the Vision Sensor

* This sensor allows for our robot to see objects and interact with them
* For example, locate green objects and move towards them


## Initializing our Vision Sensor to Detect Objects

* Define vision port
* Specify a colour range to detect for our vision sensor
* Colour range called colour signature

## Demo

<!-- Notes: 
#define VISION_PORT 1

void initialize() {
  // values acquired from the vision utility
  vision_signature_s_t RED_SIG =
    vision_signature_from_utility(EXAMPLE_SIG, 8973, 11143, 10058, -2119, -1053, -1586, 5.4, 0);
}

-->
* Let's set up our vision sensor in the PROS ```initialize()``` function



## Interacting with Objects


## Discussion


## Demo






