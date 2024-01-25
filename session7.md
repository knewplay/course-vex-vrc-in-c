---
marp: true
---

# **Session 7: Multitasking with PROS**

---

## Goals

<!-- Notes: We will get a better understanding of how PROS and sensors work through using the vision sensor and more advanced features of the motor API -->
* How to use the PROS API for multitasking
* Understand how to make your robot do multiple actions at once

---

## Overview of Multitasking

<!-- Notes: We can also use it together with autonomous mode to do more complex tasks -->
* They are a way to get our robot to do more things at the same time. For example, lift and turn
* Multithreading is like a kitchen where multiple chefs (threads) work on different dishes (tasks) at the same time, sharing the same kitchen space (computer resources). This makes cooking (processing) faster and more efficient.

## Discussion

* Could you think of any examples where you would need to use multitasking for VEX Robots?

## Task Scheduler

<!-- Notes: We can have multiple colour ranges. Default behaviour is to get object of specified colour by size -->
* Think of each task as a mini-program
* "PROS Scheduler" what controls order of task execution
* Tasks do not happen in parallel, they are swapped out very quickly one at a time by scheduler

## Creating Tasks in PROS

``task_t my_task = task_create(my_task_fn, NULL, TASK_PRIORITY_DEFAULT, TASK_STACK_DEPTH_DEFAULT, "My Task");``

* arguments are function where the task starts, argument to the function, priority for the task, stack size and name.

## Discussion

* Can you think of any example tasks you would want to create for your robot? What arguments should we pass into ``task_create()``?

## Demo

* Let's see how to create some example tasks in PROS

## Synchronization

* If two tasks access the same data or region of memory at the same time, issues will occur
* We need a way to sync the tasks. One way in PROS is to use a "mutex", which allows for only one task at a time to access shared data
* ``mutex_create()``

## Discussion

* What are some situations where two tasks will create issues by accessing shared data?

## Demo

* Let's see how to create a mutex for our tasks in PROS