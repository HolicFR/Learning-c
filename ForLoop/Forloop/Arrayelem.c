#include <stdio.h>

int main() {
    int i;
    int arr[] = {10, 20, 30, 40, 50};
    int sum = 0;
    float avg;

    // for loop execution
    for(i=0; i<5; i++){
        sum += arr[i];
    }
    avg = (float)sum / 5;
    printf("Average = %f", avg);
    
    return 0;
}