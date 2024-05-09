#include <stdio.h>
#include <stdlib.h>

#define PI 3.142

int calculate_area(int length, int width) {
    return length*width;
}

int sum_numbers(int max) {
    int sum = 0;
    for(int i = 1; i <= max; i++) {
        sum += i;
    }
    return sum;
}

double calculate_RPM(double speed, double radius) {
    double circumference = 2 * PI * radius;
    double revolutions_per_second = speed / circumference;
    return revolutions_per_second * 60; // convert to minutes
}

int main() {
    return 0;
}