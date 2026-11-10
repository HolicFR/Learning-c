#include <stdio.h>

int main() {

    int a;
    printf("Your number is: ");
    scanf("%d", &a);

    printf("Your number is ");

    if (a % 2 == 0)  printf("Even");
        else printf("Odd");

    return 0;
}