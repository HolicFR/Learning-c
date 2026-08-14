/*
 * Program: Extract First Digit from a Number
 * Concept: Integer division, digit extraction
 * Author: C Basics Practice
 */

#include <stdio.h>

int main() {
    int number = 784;

    int firstDigit = number / 100;

    printf("First digit of %d is %d\n", number, firstDigit);

    return 0;
}
