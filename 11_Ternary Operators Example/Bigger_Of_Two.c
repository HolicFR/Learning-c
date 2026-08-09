// Bigger of two numbers

#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int bigger = (a > b) ? a : b;

    printf("Bigger number = %d", bigger);

    return 0;
}