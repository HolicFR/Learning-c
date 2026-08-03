/*
Write a C program that:

Takes marks for 5 subjects from the user.
Calculates the total marks.
Calculates the average marks.
Prints both. 
*/

#include <stdio.h>

int main() {
    int a, b, c, d, e;
    int z = 500;
    float average;

    printf("Enter the marks scored in MATHS: ");
    scanf("%d", &a);
    printf("Enter the marks scored in ENGLISH: ");
    scanf("%d", &b);
    printf("Enter the marks scored in SCIENCE: ");
    scanf("%d", &c);
    printf("Enter the marks scored in COMPUTER: ");
    scanf("%d", &d);
    printf("Enter the marks scored in HINDI: ");
    scanf("%d", &e);

    printf("You scored %d marks out of %d\n", a+b+c+d+e, z);
    average = (a+b+c+d+e) / 5.0;                                    // MENTION AVERAGE FORMULA BEFORE PRINTING THE OUTPUT FOR AVERAGE 
    printf("And your Average Marks are: %.2f", average);
    return 0;
}