#include <stdio.h>
 int main() {
     float temperature;
     printf("Enter the temperature in celsius:  ");
        scanf("%f", &temperature);
        printf("Temperature in fahrenheit is: %.2f\n", (temperature = temperature * 9 / 5 + 32));   
            
            return 0;
 }