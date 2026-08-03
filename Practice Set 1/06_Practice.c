// 3. Write a program to convert Celsius (Centigrade) temperature to Fahrenheit.
#include <stdio.h>

int main() {
    float f;

        printf("Input Celsius: ");
            scanf("%f", &f);

            printf("The Temperature in Farenheit is: %.2f", (f = f * 9/5 + 32));

    return 0;
}