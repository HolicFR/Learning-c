#include <stdio.h>

int main() {
    int n;

    do {
        printf("Enter a positive number: ");
        scanf("%d", &n);
    } while (n <= 0);

    printf("You entered: %d", n);

    return 0;
}