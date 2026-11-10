#include <stdio.h>

int main() {

    int phy, maths;
    float avg;

    phy = 50; maths = 50;
    avg = (float)(phy + maths)/2;
    printf("Phy: %d Maths: %d Avg: %f\n", phy, maths, avg);

    if (avg >= 50 && (maths >= 35 && phy >= 35)){
        printf("Result: Pass");
    }

    if (avg<50) {
        printf("Result: Fail\n");
    }
    
    return 0;
}