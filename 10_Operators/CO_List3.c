#include <stdio.h>

int main() {
    int x = 10;
    int y = 20; 

    printf("%d\n", x < y);        // Returns 1 if the first value is less than the second value

    printf("%d\n", x == y);       //  Returns 1 if the values are equal

    printf("%d\n", x >= y);       // Returns 1 if the first value is greater than, or equal to, the second value
    
    printf("%d", x <= y);       // Returns 1 if the first value is less than, or equal to, the second value


    return 0;
}