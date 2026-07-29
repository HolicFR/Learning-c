#include <stdio.h>
 int main() {

    float f1 = 35e3;  //35*10^3 = 35000
    double d1 = 12E4; //12*10^4 = 120000

    printf("%.f\n", f1);
    printf("%lf", d1); 

    return 0;

}

/*In C, you can write very large or very small floating-point numbers using scientific notation.

This is done using the letter e (or E), which stands for "times 10 to the power of".

For example, 35e3 means 35 × 10³ = 35000.

This is useful for writing numbers in a shorter way. 
Especially when working with scientific values or large-scale data.
*/