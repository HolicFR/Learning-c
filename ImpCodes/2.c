#include <stdio.h>

int main() {

    const int myNum = 67; // myNum will always be 67
    myNum = 10; // error: assignment of read-only variable 'myNum'
    printf("My Number is %d\n", myNum);
    return 0;
}


//This throws an error because variable is likely to change.

// You should always declare a variable as const when you have values that are unlikely to change: