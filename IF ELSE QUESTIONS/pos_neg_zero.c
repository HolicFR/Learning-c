/* Question
Take a number and determine whether it is:
- Positive
- Negative
- Zero
Example: */

#include <stdio.h>

int main() {

    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    if (a > 0) {
        printf("Positive");
    } else if (a < 0) {
        printf("Negative");
    } else {
        printf("Zero");
    }

    
    return 0;
}   
