/*
 * Program: Convert Hours, Minutes, Seconds to Total Seconds
 * Concept: Compound time conversion, arithmetic operations
 * Author: C Basics Practice
 */

#include <stdio.h>

int main() {
    int hours = 2;
    int minutes = 35;
    int seconds = 20;

    int totalSeconds = (hours * 3600) + (minutes * 60) + seconds;

    printf("Total seconds: %d\n", totalSeconds);

    return 0;
}
