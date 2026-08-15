#include <stdio.h>
#include <math.h>

int main(void) {
    int num, original, remainder, digits = 0, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;
    while (original != 0) {
        original /= 10;
        digits++;
    }

    original = num;
    while (original != 0) {
        remainder = original % 10;
        sum += pow(remainder, digits);
        original /= 10;
    }

    printf("%s\\n", sum == num ? "Armstrong number" : "Not an Armstrong number");
    return 0;
}
