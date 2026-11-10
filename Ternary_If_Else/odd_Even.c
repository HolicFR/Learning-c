#include <stdio.h>

int main() {
    int num = 7;

    // % gives the remainder
    // If remainder is 0, number is even
    if (num % 2 == 0) {
        printf("Even");
    } else {
        printf("Odd");
    }

    return 0;
}