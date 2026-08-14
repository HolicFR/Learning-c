#include <stdio.h>

int main() {
 
    int myNum = 5;             //int is 4 bytes (32 bits)
    float myfloatNum = 5.90;   //float is 4 bytes (32 bits)
    char myChar = 'M';         //char is 1 bytes (8 bits)

    printf("My Number is %d\n", myNum);
    printf("My float Number is %f\n", myfloatNum);
    printf("My name starts with %c\n", myChar);

    return 0;
}
