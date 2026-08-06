#include <stdio.h>

int main() {
    int x = 18;
    int y;

    printf("What is your age Dumbahh: ");
    scanf("%d", &y);

    printf("%d You Are eligible to vote", y == x);
    
    return 0;
}   