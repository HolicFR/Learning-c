#include <stdio.h>

#define PI 3.14159f

int main(void) {
    float radius, area;
    printf("Enter radius: ");
    scanf("%f", &radius);
    area = PI * radius * radius;
    printf("Area of circle = %.2f\\n", area);
    return 0;
}

// contribution batch 11
