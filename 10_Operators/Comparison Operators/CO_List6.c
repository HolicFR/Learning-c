#include <stdio.h>

int main() {
    int passwordLength = 5;

        printf("%d\n", passwordLength >= 18); // 0 (False), Too short
        
        printf("%d\n", passwordLength < 8); // 1 (True), needs more characters

    return 0;
}   