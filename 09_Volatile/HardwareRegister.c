#include <stdio.h>

int main(void) {
    volatile unsigned int hardwareRegister = 0;

    printf("Register Value: %u\n", hardwareRegister);

    hardwareRegister = 1;

    printf("Register changed: %u\n", hardwareRegister);

    if(hardwareRegister ==1) {
        printf("Hardware Is Ready!\n");

    }
    
    return 0;
}