/* Question
Take marks from the user and print:
Marks	Grade
90–100	A
80–89	B
70–79	C
60–69	D
Below 60	F */

#include <stdio.h>

int main() {

    int marks;

    printf("Enter Marks: ");
    scanf("%d", &marks);

    if (marks >= 90) {
        printf("Grade A");
    } else if (marks >= 80) {
        printf("Grade B"); 
    } else if (marks >= 70) {
        printf("Grade C");
    } else if (marks >= 60) {
        printf("Grade D");        
    } else {
        printf("Grade F");
    }

    
    return 0;
}
