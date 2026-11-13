#include <stdio.h>
#include <stdlib.h>

int main() {

    int i;
    for (i = 1; i<=5; i++){

            if (i == 3 ){
                printf(" \n Existing ..");
                exit(0);
            }
            else 
            printf(" \n number is %d", i);
    }

    return 0;
}