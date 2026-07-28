#include <stdio.h>
int main() {

    int myNum = 312; 
    int myOtherNum;

     printf("This is me trying to delay the output of my number by 5 seconds\n");
     sleep(5);

     myOtherNum = myNum;
        printf("My number is : %d", myOtherNum);

    return 0;

}