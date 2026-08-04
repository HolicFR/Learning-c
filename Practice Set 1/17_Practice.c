#include <stdio.h>

int main() {
    float length = 12.5;
    float width = 6.0;

    printf("Area: %.2f\n", length * width);
    printf("Perimeter: %.2f\n", 2 * (length + width));

    return 0;
}