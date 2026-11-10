#include <stdio.h>

int main() {
    int num = 25;

    // % gives the remainder
    // Remainder 0 means the number is divisible by 5
    if (num % 5 == 0) {
        printf("Divisible by 5");
    } else {
        printf("Not divisible by 5");
    }

    return 0;
}