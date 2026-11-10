#include <stdio.h>
#include <stdbool.h>
    
int main() {
    int age;
    bool isAdult;

    printf("Enter your age: ");
    scanf("%d", &age);

    isAdult = age >= 18;

    printf("Adult = %d", isAdult);
    

    return 0;
}