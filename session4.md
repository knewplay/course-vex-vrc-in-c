# **Session 4: Header Files & Code Organization**

---

## Goals

* How header files work in C
* How to organize code

---

## Header Files

* Purpose: Header files in C are used to declare variables, and data types that are used across multiple C files.
* Syntax: They have a .h extension and are included in C source files using the `#include`
* Standard headers are `stdio.h`, `stdlib.h`
* You can create your own headers to make code more resuable and readable

---

## Best Practices

* Modular Design: Divide your program into distinct segments, each with a clear responsibility
* Consistency: Have a consistent naming convention for header files and their corresponding source files (e.g., math_operations.h and math_operations.c)
* Minimal Include: Only include necessary header files within other headers to avoid unnecessary dependencies and reduce compilation times

---

## Discussion

* What do you think would be inside `stdio.h`?
* What advantages do you think header files give us?

---

## Demo

* Let's see some examples of how to create and use header files in C
* Let's also also take a look at some of the standard header files in a C program such as `stdio.h` and see what's inside

---

## Header Files and Organization in PROS

* `api.h`: The primary header file for PROS, which includes declarations for most of the basic functions and types used in PROS

* `main.h`: Typically includes the main declarations and is where users can add their own function declarations, global variables, and additional includes

---

## Discussion

* What kind of code do you think is in `api.h` and `main.h` and why?

---

## Demo

* Let's take a look inside the two functions and see what type of code are in the headers

---

## PROS Functions and Organizing Your Code

* The main functions in PROS are `setup()`, `opcontrol()`, and `autonomous()`
* `opcontrol()`:
  * Manages manual robot control via user inputs during the operator control phase
  * Continuously checks and responds to joystick and button inputs to control actuators

* `setup()`:
  * Initializes robot configurations and sensor before competition phases
  * Executed once at the start to prepare the robot for operation

* `autonomous()`:
  * Controls the robot automatically without user input during the autonomous phase
  * Executes pre-programmed tasks and strategies for autonomous operation

---

## Demo

* Let's now take a look at these three functions and write code for each one