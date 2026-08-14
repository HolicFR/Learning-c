/*
 * Program: Display Multiple Variable Types
 * Concept: Data types (int, float, double), format specifiers
 * Author: C Basics Practice
 */

#include <stdio.h>

int main() {
    int age = 19;
    float height = 5.7;
    double percentage = 85.5;

    printf("Age = %d\n", age);
    printf("Height = %.1f\n", height);
    printf("Percentage = %.2f\n", percentage);
    
    return 0;
}
