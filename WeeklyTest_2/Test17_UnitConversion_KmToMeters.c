/*
 * Program: Convert Kilometers to Meters
 * Concept: Floating-point arithmetic, unit conversion
 * Author: C Basics Practice
 */

#include <stdio.h>

int main() {
    float kilometers = 4.7;
    float meters = kilometers * 1000;

    printf("%.2f km = %.2f meters\n",
           kilometers, meters);

    return 0;
}
