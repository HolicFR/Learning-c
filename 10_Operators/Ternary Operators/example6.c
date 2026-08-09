// The corresponding program with the use of ifelse statements is as follows − 

#include <stdio.h>

int main() {

    int a = 100, b = 20, c;

    if (a >= b){
        printf("a is larger\n");
        c = a;

    }
    else{
        printf("b is larger \n");
        c = b;
    }
    printf("a: %d b: %d c: %d\n", a, b, c);

    return 0;
}