// The similar logic can also be expressed using the && operator as follows −


#include <stdio.h>

int main() {

    int phy = 50;
    int maths = 60;

    printf("Physics marks: ");
        scanf("%d", &phy);

        printf("Maths marks: ");
        scanf("%d", &maths);

    if (phy >= 50 && maths >= 50){
        printf("Result:Pass");
    }

    else {
        printf("Result:Fail");
    }

    return 0;
}