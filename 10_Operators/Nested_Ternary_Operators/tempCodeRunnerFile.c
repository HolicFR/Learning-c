#include <stdio.h>

int main() {

    int a = 15;
    printf("a: %d\n", a);

    (a % 2 == 0) ? (
        (a%3 == 0) ? printf("Divisible by 2 and 3") : printf("Divisible by 2 but not 3"))
        : (
            (a%3 == 0) ? printf("Divisible by 3 but not 2") : printf("not divisible by 2, not divisible by 3")

        );
    
    return 0;
}