---
marp: true
---

# **Session 1: Introduction to VEX and Programming**

---

## Goals

* Get an overview of VEX Robotics hardware and software
* Understand why and when to use the C programming language
* Intro to PROS, VS Code and Git

---

## Rules of VEX Competition

<!-- Notes: Give overview of the VEX Robotics competition, including its rules, format, and what you will learn. -->
<!-- Notes: Present key components and hardware such as the VEX V5 Brain. I will present the V5 hardware in person and demo it. -->
<!-- Notes: We can provide short video of past VEX competitions in action. -->
* VEX is a global robotics competition for students, in which teams design build and program robots to compete against each other.
* Matches are played on a square field, with teams competing in alliances of two and trying to earn points against oponents.

---

## Discussion

<!-- Notes: Load and run our C programs, directly controls the hardware such as motors and gears, etc. -->
* What do you think the some of the features of the VEX V5 brain are? What kind of things can it allow our robot to do?

---

## Demo

* We will introduce the main hardware, the "VEX V5 Brain", and give physical demo of its use and features. We will show where to find the stored programs you upload, for example.

---

## Programming Languages and the Role of C

<!-- Notes: Introduction to the concept of programming languages. What is programming language, why is it used, history of programming. -->
* A programming language is a set of instructions and syntax used to communicate with computers
* C programming language, developed in the 1970s by Dennis Ritchie, has left an permanent mark on the world of computing.
<!-- Illustration: 

Programmer next to a VEX robot arm with a idea bubble that has simplified coding logic to control arm. For example, 

if object_detected then
    move_arm_to(object_position)
    close_claw()
-->

---

## Programming Languages and the Role of C

<!-- Notes: Briefly discuss how C is close to the hardware, and can interact with memory manually, whereas other languages do not give as much access -->
* C is still relevant today, it is widely used in operating system programming, embedded systems, and electronics
* Notable software like the Linux kernel, video games and operating systems like Android are written in C
* C lets us interact easily with computer memory, making it well suited for applications that require speed and efficiency
<!-- Illustration: 

Embedded device and code snippet that controls it. Example: smart light bulb

A kid sitting at their desk with a microcontroller such as a raspberry pi that has wires connected to a computer and a smart bulb. The computer screen shows code that will control the bulb, for example:

if motion_detected() and time is between 6 PM and 6 AM then:
    turn_on(light_bulb)
-->
---

## Discussion

* What type of software is C usually used for?

---

## Demo

<!-- Notes: Ensure that students understand basic concepts below and can write the hello world program by themselves from scratch before moving on to more advanced concepts -->
* Let's look at an example of basic "Hello World" program and point out syntax, indentation, basic structure of C program. Make sure to pay attention to the consistent spacing and indentation.

---

## Programming Libraries and PROS

---

## What are Programming Libraries?

* A library is pre-written code that you can use in your own programs
* They provide functionality and tools that you can use without having to write everything from scratch
* Libraries save time and reduce errors in software development

--- 

## What is PROS, and Why Do We Use It?

* PROS is a popular open source programming library for VEX
* Gives us more power and freedom compared to VEXcode Blocks
* It is designed for our V5 hardware, so it simplifies the process of programming your robot
* PROS is widely used and supported, and has good integration with VS Code

---

## Getting Started with PROS

* To get started, we will install the PROS plugin in VS Code and set up our development environment.

---

## Discussion

<!-- Notes: A few things we'd have to do without PROS: 
- Direct Hardware Communication: Manually manage protocols for motors, sensors, and V5 brain.
- Sensor Data Processing: Calibrate and interpret raw sensor data
- Must create basic functions like angle calculations yourself
- Develop your own way to debug code, manually manage memory processing, etc.
-->
* What do you think the benefits of libraries are? Can you name any widely used libraries?
* How does PROS help us in programming our VEX Robot? What do you think are some things we'd have to do ourselves if we didn't have PROS?

---

## Demo

* Show PROS code that is part of a new PROS project. Show opcontrol(), initialize(), and autonomous() functions and give basic explanation.

---

## What are IDEs and Text Editors?

---

## Introduction to Text Editors and IDEs

* An IDE stands for Integrated Development Environment. It is an application you can write, debug, and edit code in
* Text editors also allow us to write and edit code, but usually have less built in features than an IDE
* We will use VS Code for this course and introduce it

--- 

## Discussion

<!-- Illustration: 

Resolving merge conflict using git version control. A split computer screen that displays two versions of code side by side in VS Code. Right and left screens should have the same function, but slight difference which indicates a version conflict.

Code on left:

void opcontrol() {
   move_forward(maximum speed) 
}

Code on right:

void opcontrol() {
    move_forward(half speed)
}
-->
* What are some benefits and features of VS Code?

---

## Demo

* Tour of VS code: How to create project, how to install plugins, using basic git commands, PROS plugin demo
* Installing and setting up the PROS Plugin in VS Code.

---

## Homework

<!--Illustration idea: 

Show output of "Hello World" program on VS Code terminal of a computer screen

-->
* Write a "Hello World" program in C using VS Code. Make sure it compiles and can print "Hello world"
["Hello, World!" Program](https://en.wikipedia.org/wiki/%22Hello,_World!%22_program)
