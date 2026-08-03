#include <stdio.h>

int main() {

    float p;
    int r;
    int t;

    printf("Enter Your Principle Amount: \n");
    scanf("%f", &p);

    printf("Enter Your Interest Rate: \n");
    scanf("%d", &r);

    printf("Enter Your Time Period: \n");
    scanf("%d", &t);

    printf("Your Simple Interest is: %.2f", p*r*t / 100);


    return 0;
}   