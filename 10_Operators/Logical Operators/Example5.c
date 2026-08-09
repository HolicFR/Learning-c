// The following C code employs the NOT operator in a while loop −

#include <stdio.h>

int main() {
    int i = 0;

    while (!(i > 5)){
        printf("i = %d\n", i);
        i++;
    }

    return 0;
}

/*Output
In the above code, the while loop continues to iterate till the expression "!(i > 5)" 
becomes
false, which will be when the value of "i" becomes more than 5.*/