#include <stdio.h>

int main() {

    int a;

    printf("Enter your Marks: ");
    scanf("%d", &a);

    if ( a >= 90) {
        printf("A Grade.\n");
    } else if ( a >= 70) {
      printf("B Grade.\n");
    } else if ( a >= 50 ) {
        printf("C Grade.\n");
    } else if (a >= 40) {
        printf("D Grade.\n");
    } else {
        printf("Fail.\n");
    }
    return 0;
}