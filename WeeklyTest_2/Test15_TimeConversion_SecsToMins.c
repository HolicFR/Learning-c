/*
 * Program: Convert Seconds to Minutes and Remaining Seconds
 * Concept: Division and modulo operators, user input
 * Author: C Basics Practice
 */

#include <stdio.h>

int main() {
    int seconds;
    int minutes;
    int remainingSeconds;

    printf("Enter seconds: ");
    scanf("%d", &seconds);

    minutes = seconds / 60;
    remainingSeconds = seconds % 60;

    printf("Minutes: %d\n", minutes);
    printf("Remaining Seconds: %d\n", remainingSeconds);

    return 0;
}
