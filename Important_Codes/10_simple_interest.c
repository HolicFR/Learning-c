#include <stdio.h>

int main(void) {
    float principal, rate, time, interest;
    printf("Enter principal, rate, and time: ");
    scanf("%f %f %f", &principal, &rate, &time);
    interest = (principal * rate * time) / 100;
    printf("Simple Interest = %.2f\\n", interest);
    return 0;
}

// contribution batch 10
