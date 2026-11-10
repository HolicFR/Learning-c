#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("You have lived approximately %d days.\n", age * 365);

    return 0;
}