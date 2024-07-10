---
marp: true
---

# **Session 4: PID Tuning and Driver Control**

## Goals

* Learn about different driver control algorithms and options
* What is a PID controller and PID Tuning?

---

## Driver Control

* There are different methods of controlling the drivetrain with the VEX controller
* Tank Drive, Arcade Drive, Curvature Drive

## Tank Drive

* Power given to left wheels and right wheels
* Simplest method of controlling the drivetrain

## Arcade Drive

* Most common control method
* The robot has a forward, backward, and turning speed

## Curvature Drive

* Give the robot a forwards and backwards speed, as well as the curvatare of an arc
* More curvature = more turn
* Better than arcade for turning

## Demo

* Let's take a look at the code snippets for each option to see how they are programmed in LemLib

## PIDs and PID Tuning

* PIDs control power for our motors based off input sensor data
* Used for almost all motion algorithms in LemLib

## Demo

* Let's see our code and the parameters ```kP``` and ```kD``` which are our most important settings
