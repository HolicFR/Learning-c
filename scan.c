#include <stdio.h>

int main() {

    int a;
    printf("Your number is: ");
    scanf("%d", &a);

    printf("Your number is 10");

    if (a % 2 == 0)  printf("Even", &a) : printf("Odd", &a);

    return 0;
}