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

<!-- Notes: Overview of the VEX Robotics competition, including its rules, format, and what you will learn. -->
* VEX is a global robotics competition for students, in which teams design build and program robots to compete against each other.
* Matches are played on a square field, with teams competing in alliances of two and trying to earn points against oponents.
<!-- Notes: Present key components and hardware such as the VEX V5 Brain. I will present the V5 hardware in person and demo it. -->
<!-- Notes: We can provide short video of past VEX competitions in action. -->

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
* A programming language is a set of instructions and syntax used to communicate with computers, which allows us to create software effectively.
* C programming language, developed in the 1970s by Dennis Ritchie, has left an permanent mark on the world of computing.
<!-- Illustration Idea: Illustration here showing C algorithm designed by coder inputted into computer -->

---

## Programming Languages and the Role of C

<!-- Notes: Briefly discuss how C is close to the hardware, and can interact with memory manually, whereas other languages do not give as much access -->
* C is still relevant today because it forms the basis for many other languages and is widely used in system programming, embedded systems, and low-level development.
* Notable software like the Linux kernel, video games, and various operating systems are written in C, underscoring its significance.
* C stands out as an efficient language because you can interact easily with computer memory, making it well suited for applications that require speed and resource optimization.
<!-- Illustration idea: Show the basics of how computer memory is organized -->
---

## Discussion

* Why do you think C is still relevant today?
* What type of software is C usually used for?

---

## Demo

<!-- Notes: Ensure that students understand basic concepts below and can write the hello world program by themselves from scratch before moving on to more advanced concepts -->
* Let's look at an example of basic "Hello World" program and point out syntax, indentation, basic structure of C program. Make sure to pay attention to the consistent spacing and indentation.

---

## Programming Libraries and PROS

---

## What are Programming Libraries?

* Programming libraries are pre-written code modules that can be used in your programs.
* They provide functionality and tools that you can use without having to write everything from scratch.
* Libraries save time and reduce errors in software development.

--- 

## What is PROS, and Why Do We Use It?

* PROS is a popular open source programming library for VEX.
* It is specifically designed for our V5 hardware, and so it simplifies the process of programming your robot.
* PROS is widely used and supported, and has good integration with VS Code.
* We explore PROS in more detail in the coming sessions.

---

## Getting Started with PROS

* To get started, we will install the PROS plugin in VS Code and set up our development environment.

---

## Discussion

<!-- Important to understand this idea as the entire course is based on PROS, a library. A few things we'd have to do without PROS: 
- Direct Hardware Communication: Manually manage protocols for motors, sensors, and V5 brain.
- Sensor Data Processing: Calibrate and interpret raw sensor data
- Must create basic functions like angle calculations yourself
- Develop your own way to debug code, manually manage memory processing, etc.
-->
* What do you think the benefits of libraries are? Can you name any widely used libraries?
* How do libraries speed up the development process?
* How does PROS help us in programming our VEX Robot? What do you think are some things we'd have to do ourselves if we didn't have PROS?

---

## Demo

* Show PROS code that is part of a new PROS project. Show opcontrol(), initialize(), and autonomous() functions and give basic explanation.

---

## IDEs and Common Software Tools

---

## Introduction to Text Editors and IDEs

* We will discuss popular IDEs and text editors such as VS Code, Sublime, Vim, Emacs.
* Basic intro to VS Code and how to navigate the UI.
* We will introduce git and github. Git is a version control software that allows us to conveniently take snapshots of our code at any point in time, and revert back to it.

--- 

## Discussion

* What are some benefits and features of VS Code?
* What are the benefits of git?

---

## Demo

* Tour of VS code: How to create project, how to install plugins, using basic git commands, PROS plugin demo'd
* Installing and setting up the PROS Plugin in VS Code.

---

## Homework

1. Compare C and Python, and discuss scenarios for using each.
2. Write a hello world program in C using VS Code. Make sure it compiles and can print "Hello world".