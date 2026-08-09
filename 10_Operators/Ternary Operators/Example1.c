// The following C program uses the ternary operator to check if the value of a variable is even or odd.

#include <stdio.h>  
    int main() { 

        int a = 123;

        (a % 2 == 0) ? printf("%d is even", a) : printf("%d is odd", a);
        return 0;

    }