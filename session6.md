---
marp: true
---

# **Session 6: Sensors and Motors in Depth**

---

## Goals

<!-- Notes: We will get a better understanding of how PROS and sensors work through using the vision sensor and more advanced features of the motor API -->
* How to use the PROS API to program VEX sensors
* Understand VEX Vision Sensor
* Different ways of moving with motors

---

## Overview of the Vision Sensor

<!-- We can also use it together with autonomous mode to do more complex tasks -->
* This sensor allows for our robot to see objects and interact with them
* For example, locate green objects and move towards them

## Initializing our Vision Sensor to Detect Objects

* Define vision port
* Specify a colour range to detect for our vision sensor
* Colour range called colour signature

## Demo

* Let's see how to declare the colour signature for red objects

## Interacting with Objects

* The vision sensor will detect objects and then return data that we can work with
* The data gives us the colour signature, height width, and coordinates of the object
* Vision sensor can return objects based on their size, colour, or both

<!--Notes: 
* Each returned object from the vision sensor comes with a set of coordinates telling where the object was found in the vision sensor’s field of view. 
* The default behavior is to return the coordinates as distance from the top left corner of the field of view - so positive y is downward and positive x is right. 
* With the PROS API, you can change this behavior so that the center of the Field Of View is the (0,0) point for object coordinates. Positive y is still downward and positive x is still right, but negative y is upward of center and negative x is left of center in this configuration.
-->


## Discussion


## Demo


## Motors

* Many ways to do movement with motors
* Some better for autonomous mode, some better for user mode

## Initializing our Motors


## Demo


## Motors for Autonomous Mode




