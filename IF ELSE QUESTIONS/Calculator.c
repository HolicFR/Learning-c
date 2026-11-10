#include <stdio.h>

int main() {

    float a, b;
    char operator;

    printf("Enter First Number: ");
    scanf("%f", &a);

    printf("Enter Second Number: ");
    scanf("%f", &b);

    printf("Enter Operator (+, -, *, /): ");
    scanf(" %c", &operator);

    switch (operator) {

        case '+':
        printf("Result: %.2f", a + b);
        break;

        case '-':
        printf("Result: %.2f", a - b);
        break;

        case '*':
        printf("Result: %.2f", a * b);
        break;

        case '/':
        if (b != 0) {
        printf("Result: %.2f", a / b);
       } else {
        printf("Cannon divide by zero");
    }
    break;

     default: 
       printf("Invalid Operator");
}

    return 0;
}