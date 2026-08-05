#include <stdio.h>

int main() {
    volatile int value = 10;

    printf("Initial Value: %d\n", value);

    value = 20;

    printf("Updated value: %d\n", value);

    return 0;
}

/*This example demonstrates syntax, but volatile is completely unnecessary here.

A normal:

*int value = 10;*

would work exactly fine
*/