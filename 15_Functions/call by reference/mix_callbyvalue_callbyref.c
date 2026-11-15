// Mixing Call by Value and Call by Reference

#include <stdio.h>
#include <math.h>

/* function declaration */

int calculate(int, int *, int *);



int main() {

        int a = 10;
        int b, c;

        calculate(a, &b, &c);

        printf("a: %d \nSquare of a: %d \ncube of a: %d", a, b, c);

}

    int calculate(int x, int *y, int *z){

        *y = pow(x, 2);
        *z = pow(x, 3);


    return 0;
}

/*The Call by Reference mechanism is widely used when a function needs to perform memory-level manipulations

 such as controlling the peripheral devices, performing dynamic allocation, etc.*/

