// Biggest of THREE numbers

#include <stdio.h>

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    int biggest = (a > b) 
                    ? ((a > c) ? a : c) 
                    : ((b > c) ? b : c);

    printf("Biggest number = %d", biggest);

    return 0;
}