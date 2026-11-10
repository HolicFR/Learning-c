// num = 8 
// othernum = 3
// SWAP 

#include <stdio.h> 
    int main() {

        int myNum = 8;
        int myOtherNum = 3;

        printf("Before Swap:\n");
        printf("My Number is: %d\n", myNum);
        printf("My OtherNum is: %d\n", myOtherNum);

        myNum = myNum + myOtherNum;
        myOtherNum = myNum - myOtherNum;
        myNum = myNum - myOtherNum;

        printf("AfterSwap: \n");
        printf("My Num is: %d\n", myNum);
        printf("My OtherNum is: %d\n", myOtherNum);

        return 0;

    }