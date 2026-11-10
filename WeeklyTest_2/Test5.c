#include <stdio.h>

int main() {
    char grade = 'A';
    int age = 19;
    float height = 5.7;
    double pi = 3.141592;

    printf("Grade = %c\n", grade);
    printf("Age = %d\b", age);
    printf("Height = %.1f\n", height);
    printf("Pi = %.6lf\n", pi);
    
    return 0;
}