// The following program compares the two variables "a" and "b", and assigns the one with the greater value to the variable "c".

#include <stdio.h>

int main() {
    int a = 100, b = 20, c;

    c = ( a >= b) ? a : b;

    printf("a: %d b: %d c: %d\n", a, b, c);
    
    return 0;
}