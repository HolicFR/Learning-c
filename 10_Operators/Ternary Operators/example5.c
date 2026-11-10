If you need to put multiple statements in the true and/or false operand of the ternary operator, you must separate them by commas, as shown below −

#include <stdio.h>

int main() {

    int a = 100, b = 20, c;

    c = (a >= b) ? printf("a is larger "), c = a  : printf("b is larger "), c = b;

    printf("a: %d b: %d c: %d\n", a, b, c);
    
    return 0;
}