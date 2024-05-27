---
marp: true
---

# **Session 1: Introduction to LemLib**

---

## Goals

* Get an overview of LemLib and what templates are in PROS
* Understand the benefits of LemLib

---

## What is a template?

* LemLib is considered a PROS "template"
* A template is a description of a set of files or predefined project structure that helps us set up our code for robotics tasks

---

## Why LemLib?

* Implements useful common algorithms for robotics motion such as:
  * PID
  * Pure Pursuit
  * Odometry
  * Motion Chaining

---

## What is PID?

* PID Stands for Proportional, Integral, and Derivative
* Purpose: To maintain a desired output by correcting errors between the desired setpoint and the actual value

---

## Components of PID

* Proportional (P): Reacts to current error. Larger error means larger correction
* Integral (I): Reacts to the accumulated error over time
* Derivative (D): Reacts to rate of change of error

---

## How PID Works

* Setpoint: Desired target value
* Process Variable: Current value
* Error: Difference between setpoint and process variable
* Correction = P + I + D:
  * Adjusts output to minimize error

---

## PID Tuning

* Adjusting PID parameters (P, I, D) to get the desired response
* Goal: Achieve stability, fast response, and minimal error

---

## PID Example: Controlling Robot's Motor Speed

* Setpoint: Desired speed.
* Process Variable: Actual speed.
* Error: Difference between desired and actual speed.
* Use PID to adjust motor power to reach and maintain the desired speed.* 