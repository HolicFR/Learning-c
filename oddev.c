#include <stdio.h>

int main() {

    int a;

    printf("Enter your number: ");
    scanf("%d", &a);

    if (a % 2 == 0) {
        printf("odd");
    } else {
        printf("Even");
    }
    return 0;
}