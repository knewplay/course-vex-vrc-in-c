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

* Helps us move our robot across the field
* Uses both angular and lateral PID controllers
* Can use ``chassis.moveToPoint(10, 10, 4000);`` to move our robot to the coordinates ``(10, 10)`` with 4000 ms time delay
![lateral motion](/./Move.jpg)


## Pure Pursuit: How it works

* Pure Pursuit is a path following algorithm. The robot can do smooth quick movements with it
* Algorithm draws circle around robot and finds intersection of the circle with specified path
* Robot drives toward intersection of circle and path
![pure pursuit](https://lemlib.readthedocs.io/en/v0.5.0/_images/pursuit.gif)

## Pure Pursuit: Creating Paths

* Can use the website [path.jerry.io](https://path.jerry.io) to specify path
* On the website, draw path, then save and download the path as a ``.txt`` file
* We can then upload our file to our robot using LemLib as follows

```
// path file name is "example.txt".
ASSET(example_txt);
ASSET(example2_txt);

void autonomous() {
    // set chassis pose
    chassis.setPose(0, 0, 0);
    // lookahead distance: 15 inches
    // timeout: 2000 ms
    chassis.follow(example_txt, 15, 2000);
    // follow the next path, but with the robot going backwards
    chassis.follow(example2_txt, 15, 2000, false);
}
```

## Motion Chaining

