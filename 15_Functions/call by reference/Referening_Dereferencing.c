#include <stdio.h>

int main() {

    int x = 10;
    int *y = &x; // dereference operator (*)

        printf("X: %d Address of X: %d\n", x, &x);
        printf("Address of Y: %d\n", &y);
        printf("Value at address in y: %d\n", *y);
}
    