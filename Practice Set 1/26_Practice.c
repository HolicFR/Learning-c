#include <stdio.h>

int main() {
    int number = 784;

    int firstDigit = number / 100;

    printf("First digit of %d is %d\n", number, firstDigit);

    return 0;
}