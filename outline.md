
# Outline

## **Session 1: Introduction to VEX and Programming**

### Subsession 1-1

#### Slides

* Title slide: *Introduction to VEX Robotics Competition*
* Overview of the VEX Robotics competition, including its rules, format, and what you will learn.
* VEX is a global robotics competition for students, in which teams design build and program robots to compete against each other.
* Matches are played on a square field, with teams competing in alliances of two and trying to earn points against oponents.
* Present key components and hardware such as the VEX V5 Brain. I will present the V5 hardware in person and demo it.
* We can provide short video of past VEX competitions in action.

#### Discussion

* What do you think the some of the features of the VEX V5 brain are? What kind of things can it allow our robot to do?

#### Demo

* We will introduce the main hardware, the "VEX V5 Brain", and give physical demo of its use and features. We will show where to find the stored programs you upload, for example.

### Subsession 1-2

#### Slides

* Title slide: *Programming Languages and the Role of C*

Slide 1: Intro to Programming Languages

* Introduction to the concept of programming languages. What is programming language, why is it used, history of programming.
* A programming language is a set of instructions and syntax used to communicate with computers, which allows us to create software effectively.

Slide 2: Brief C history

* C programming language, developed in the 1970s by Dennis Ritchie, has left an permanent mark on the world of computing.
* C is still relevant today because it forms the basis for many other languages and is widely used in system programming, embedded systems, and low-level development.
* Notable software like the Linux kernel, Python's CPython interpreter, and various operating systems are written in C, underscoring its significance.

Slide 3: C vs. Other Languages

* C stands out as an efficient language, making it well suited for applications that require speed and resource optimization.

#### Discussion

* Why do you think C is still relevant today?
* What type of software is C usually used for?

#### Demo

* Show example of basic "Hello World" program and point out syntax, indentation, basic structure of C program. Make sure to point out consistent spacing, valid vs invalid variable names, must always have main function, etc.

### Subsession 1-3

#### Slides

* Title Slide: Programming Libraries and PROS

Slide 1: What are Programming Libraries?

* Programming libraries are pre-written code modules that can be used in your programs.
* They provide functionality and tools that you can use without having to write everything from scratch.
* Libraries save time and reduce errors in software development.

Slide 2: What is PROS, and Why Do We Use It?

* PROS is a popular open source programming library for VEX.
* It is specifically designed for our V5 hardware, and so it simplifies the process of programming your robot.
* PROS is widely used and supported, and has good integration with VS Code.
* We explore PROS in more detail in the coming sessions.

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

#### Homework

* Within main(), write code that will compute area of a triangle by declaring variables, and using appropriate arithmetic operations. Try to experiment using float and int.

## **Session 3: Functions and Problem Solving with Programming**

### Subsession 3-1

#### Slides

* Title Slide: *Understanding Loops*
* Introduction to loops in programming. Explain while and for loops, and why we use them in our code.
* Discuss why loops can be particulalry useful for solving repetive tasks, and examples of how they are used in robotics programming.

#### Discussion

* Why are loops essential in programming, and what are their benefits?
* Give an example of a problem that would benefit from using loops.

#### Demo

* Practical example of using loops in the context of PROS. In the PROS initialize() function, we can use a loop to initialize properties of multiple sensors.

### Subsession 3-2

#### Slides

* Title Slide: *Probem Solving with Programming*
* We will introduce problem solving strategies in programming such as breaking down the problem into simpler steps, designing an algorithm, and coding the solution, and how functions can be effective for this.

#### Discussion

* What are the key steps in problem solving through programming?

#### Demo

* We will walk through the modelling, breaking down, and solving of simple problems at first, such as reading in numbers and adding them.

#### Subsession 3-3

#### Slides

* Title Slide: *Understanding Functions*
* Functions are reusable blocks of code. You can define functions via a function name, parameters, return type, and body. All functions follow this format.
* The advantages of functions: modularity and better code organization.

#### Discussion

* Why are functions important in programming?
* Give an example of a function
* DRY: Don't Repeat Yourself principle

#### Demo

* Create and demonstrate a simple function in C that performs a specific task in PROS for robotics, such as a function to control motor speed.

### Subsession 3-4

### Slides

* Title Slide: *Uploading Code to VEX V5*
* Introduction to the process of uploading code to the VEX V5 using PROS
* Overview of the tools and software required, i.e. PROS plugin and VS Code. Using these tools we provide step-by-step instrucitons for how to upload sample code that will control robot's motors.

### Discussion

* In your own words, what are the required steps for uploading a program to the VEX V5?

### Demo

* Will demo uploading code that will control robot's motors using PROS VS Code plugin.



