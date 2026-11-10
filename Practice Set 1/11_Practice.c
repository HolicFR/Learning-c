#include <stdio.h>

int main() {

    float bill;
    int people;
    float eachPerson;

    printf("Enter total bill: ");
    scanf("%f", &bill);

    printf("Enter number of people: ");
    scanf("%d", &people);

    eachPerson = bill / people;

    printf("Each person pays: %.2f", eachPerson);

    return 0;
}