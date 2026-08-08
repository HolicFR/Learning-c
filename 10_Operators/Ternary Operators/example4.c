// The corresponding code with ifelse construct is as follows −

#include <stdio.h>  
int main() {
        int a = 100, b = 20, c;

        if (a >= b) {
            c = a;
        }
        else{ 
            c = b;
        }
        printf("a: %d b: %d c: %d\n", a, b, c);

        return 0;
    }