// positive or negative

#include <stdio.h>  
    int main() {
        int n;

        printf("Enter a number: ");
        scanf("%d", &n);

        (n >= 0) ? printf("Positibe") : printf("Negative");

        return 0;

}