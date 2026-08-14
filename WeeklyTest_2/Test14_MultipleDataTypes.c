/*
 * Program: Display Multiple Data Types
 * Concept: char, int, float, double format specifiers
 * Author: C Basics Practice
 */

#include <stdio.h>

int main() {
    char grade = 'A';
    int age = 19;
    float height = 5.7;
    double pi = 3.141592;

    printf("Grade = %c\n", grade);
    printf("Age = %d\n", age);
    printf("Height = %.1f\n", height);
    printf("Pi = %.6lf\n", pi);
    
    return 0;
}
