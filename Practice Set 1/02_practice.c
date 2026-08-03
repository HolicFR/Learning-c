// b. Using inputs supplied by the user.

#include <stdio.h>  
int main() {
        int length, breadth;

        printf("Enter The length of the rectange: ");
        scanf("%d", &length);

        printf("Enter The breadth of the rectange: ");
        scanf("%d", &breadth);

        printf("The area of the rectangle is: %d\n", length * breadth);

        return 0;

}

// MISTAKES MADE : DIDN'T ADD & IN THE SCANF FUNCTION BEFORE LENGTH AND BREADTH.
