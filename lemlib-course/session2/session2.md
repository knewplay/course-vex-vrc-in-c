---
marp: true
---

# **Session 2: Motion Algorithms**

---

## Goals

* Learn about different motion algorithms in LemLib for your robot
* Angular motion, lateral motion, "Pure Pursuit", "Motion Chaining"

---

## Angular Motion

* Simplest type of motion in LemLib
* Responsible for turning the robot at a certain angle, only uses angular PID controller
* Can be accomplished using the function ``chassis.turntoHeading(270, 4000);``
* turns robot to face 270 degrees with a timeout of 4000 ms

---

## Turn To Point

* Instead of specifying 270 degrees for turn, we can specify coordinates
``chassis.turnTo(53, 53, 1000);``
* Turn to point at coordinates ``(53, 53)`` with timetout of 1000 ms

---

## Demo

* Let's see how to code our robot with this function and additional parameters we can add

## Lateral Motion