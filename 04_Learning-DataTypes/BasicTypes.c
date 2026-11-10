#include <stdio.h>
 
int main() {
    int number = 10;
    float weight = 50.6;
    double distance = 122.214;
    char letter = 'A';


    printf("My number is: %d\n", number); //Output : 10
    printf("My weight is : %.2f\n", weight); //Output : 50.6;
    printf("My distance is : %.3lf\n", distance); //Output : 122.214
    printf("My letter is : %c\n", letter); //Output : A

    return 0;
    

}