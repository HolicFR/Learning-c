#include <stdio.h> 
    int main() {
        int myNum = 8;
        int myOtherNum = 3;

        printf("Before swap:\n");
        printf("myNum = %d\n", myNum);
        printf("myOtherNum = %d\n\n", myOtherNum);

        myNum = myNum + myOtherNum;
        myOtherNum = myNum - myOtherNum;
        myNum = myNum - myOtherNum;

        printf("After swap:\n");
        printf("myNum = %d\n", myNum);
        printf("myOtherNum = %d\n", myOtherNum);

        return 0;

    }