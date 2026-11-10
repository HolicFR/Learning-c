#include <stdio.h>

int main() {
    int age;
    char hasID;

    printf("What is your age: ");
    scanf("%d", &age);

    printf("Do you have an ID? (y/n): ");
    scanf(" %c", &hasID);

    if (age >= 18) {
        if (hasID == 'y' || hasID == 'Y') {         // Used com
            printf("Entry Allowed.\n");
        } else {
            printf("Bring your ID.\n");
        }
    } else {
        printf("Too young to enter.\n");
    }

    return 0;
}