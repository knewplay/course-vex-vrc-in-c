
# Outline

## **Session 1: Introduction to VEX and Programming**

### Subsession 1-1

#### Slides

* Title slide: *Introduction to VEX Robotics Competition*
* Overview of the VEX Robotics competition, including its rules, format, and what you will learn.
* VEX is a global robotics competition for students, in which teams design build and program robots to compete against each other.
* Matches are played on a square field, with teams competing in alliances of two and trying to earn points against oponents.
* Present key components and hardware such as the VEX V5 Brain.
* We can provide short video of past VEX competitions in action.

#### Discussion

* What do you think the some of the features of the VEX V5 brain are? What kind of things can it allow our robot to do?

#### Demo

* We will introduce the main hardware, the "VEX V5 Brain", and give physical demo of its use and features.

### Subsession 1-2

#### Slides

* Title slide: *Programming Languages and the Role of C*

* Introduction to the concept of programming languages. What is programming langue, why is it used, history of programming.
* Brief history of C and its relevance in modern technology. Provide examples of well known software written in C, such as the Linux kernel.
* Comparisons between C and other languages, highlighting basics of performance, memory, and runtime efficiency.

#### Discussion

* Why do you think C is still relevant today?
* What type of software is C usually used for?

#### Demo

* Show example of basic "Hello World" program and point out syntax, indentation, basic structure of C program. Make sure to point out consistent spacing, valid vs invalid variable names, must always have main function, etc.

### Subsession 1-3

#### Slides

* Title Slide: Programming Libraries and PROS
* Explanation of programming libraries, i.e. libraries provide code written for us that we can use to build on top of without worrying about details.
* Introduction to PROS and its advantages over other libraries for VEX. For example, PROS is more popular and better supported than RobotC.

#### Discussion

* What do you think the benefits of libraries are?
* How do libraries speed up the development process?
* How does PROS help us in programming our VEX Robot?

#### Demo

* Show PROS code that is part of a new PROS project. Show opcontrol(), initialize(), and autonomous() functions and give basic explanation.

### Subsession 1-4

#### Slides

* Title Slide: IDEs and Common Software Tools
* We will discuss popular IDEs and text editors such as VS Code, Sublime, Vim, Emacs.
* Basic intro to VS Code and how to navigate the UI.
* We will introduce git and github. Git is a version control software that allows us to conveniently take snapshots of our code at any point in time, and revert back to it.

#### Discussion

* What are some benefits and features of VS Code?
* What are the benefits of git?

#### Demo

* Tour of VS code
* Installing and setting up the PROS Plugin in VS Code.

#### Homework

1. Compare C and Python, and discuss scenarios for using each.
2. Write a hello world program in C using VS Code. Make sure it compiles and can print "Hello world".

## **Session 2: PROS and C Programming Basics**

### Subsession 2-1

#### Slides 

* Title Slide: *Basic Structure of a C program*
* Explanation of the main function, and its significance in a C program. Most importantly, we will discuss how all program execution in C starts from main.
* Review how to properly indent, space, and format code properly for readability.
* Give basic explanation of header, i.e. what does #include <stdio.h> mean.

#### Discussion

* Where does the code execution begin in a C program?
* Why do we need a main function?

#### Demo

* Have students write setup for C program
* Some examples of incorrect C programs with common mistakes in syntax and formatting

### Subsession 2-2

#### Slides

* Title Slide: *Variables in C: Types and Operators*
* We will provide an introduction to important variable types in C, such as void, int, char, and float.
* How to declare variables, and how to update variables

#### Discussion

* Imagine a robot is reading vision sensor data as input, and you want to store the data into a variable. How do you think the data is represented, and what should the type be of the variable?
* What are the different uses for int, char, and float variables?
* What is the difference between the /, //, and % operators?

#### Demo

* C program showing different types of variable assignments and operators, as well as snippet of PROS opcontrol function that makes use of void and int variables.

### Subsession 2-3

#### Slides

* Title Slide: *Compiling C Programs*
* Basic introduction to the concept of compiling - i.e. transforming C code into executable format.
* Why compiling is necessary in C.

#### Demo

* Live demonstration of compiling a C program, from writing the code to execution of the compiled output.
