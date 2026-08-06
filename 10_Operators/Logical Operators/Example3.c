// The following example shows a compound Boolean expression in a C program −

#include <stdio.h> 
    int main() {

        int phy;
        int maths;

        printf("Physics marks: ");
        scanf("%d", &phy);

        printf("Maths marks: ");
        scanf("%d", &maths);

        if (phy < 50 || maths < 50){
            printf("Result:Fail");
        }
        else {
            printf("Result:Pass");
        }
        return 0;

    }