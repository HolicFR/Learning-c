#include <stdio.h>

#define PI 3.14159

int main() {

    float radius;

    printf("Enter Radius: ");
    scanf("%f", &radius);

    printf("Area = %.2f", PI * radius * radius);

    return 0;
}