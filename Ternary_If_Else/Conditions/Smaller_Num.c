#include <stdio.h>

int main() {
    int a = 40;
    int b = 25;

    // If a is smaller → store a
    // Otherwise → store b
    int smaller = (a < b) ? a : b;

    printf("Smaller number = %d", smaller);

    return 0;
}