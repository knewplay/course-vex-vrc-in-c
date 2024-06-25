---
marp: true
---

# **Session 3: Practical Examples**

---

## Goals

* Learn how to implement the LemLib algorithms in code
* Understand angular motion, lateral motion, pure pursuit, and motion chaining

## Angular Motion

```
#include "lemLib/lemLib.h"

void autonomous() {
    // Initialize the robot
    lemLib::init();

    // Rotate the robot 90 degrees to the right
    lemLib::rotateTo(90);

    // Rotate the robot 45 degrees to the left
    lemLib::rotateTo(-45);
}
```

## Lateral Motion

```
#include "lemLib/lemLib.h"

void autonomous() {
    // Initialize the robot
    lemLib::init();

    // Move the robot forward by 24 inches
    lemLib::moveTo(24);

    // Move the robot backward by 12 inches
    lemLib::moveTo(-12);

    // Move the robot to the right by 18 inches
    lemLib::strafeTo(18);

    // Move the robot to the left by 18 inches
    lemLib::strafeTo(-18);
}
```

## Pure Pursuit

```
#include "lemLib/lemLib.h"
#include "lemLib/Path.h"

void autonomous() {
    // Initialize the robot
    lemLib::init();

    // Define a path
    std::vector<lemLib::Point> path = {
        {0, 0},
        {24, 24},
        {48, 24},
        {72, 0}
    };

    // Follow the path
    lemLib::followPath(path);
}
```

## Motion Chaining

```
#include "lemLib/lemLib.h"

void autonomous() {
    // Initialize the robot
    lemLib::init();

    // Create a motion chain
    lemLib::Chain chain;

    // Add movements to the chain
    chain.addMoveTo(24); // Move forward 24 inches
    chain.addRotateTo(90); // Rotate 90 degrees to the right
    chain.addMoveTo(-12); // Move backward 12 inches
    chain.addStrafeTo(18); // Move right 18 inches

    // Execute the motion chain
    chain.execute();
}
```