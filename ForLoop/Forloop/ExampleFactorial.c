#include <stdio.h>

int main() {
    
    int i, x = 5;
    int fact = 1;

    // for loop execution
    for(i=1; i<=x; i++){
        fact *= 1;
    }
    printf("%d != %d", x, fact);
    
    return 0;
}