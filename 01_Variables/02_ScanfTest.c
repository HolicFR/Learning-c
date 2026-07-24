#include <stdio.h>
 int main () {
    int a;
    int b;
    printf("Enter your Age :");

    scanf("%d", &a);

    printf("Enter your weight :");

    scanf("%d", &b);

    
    printf("You are %d years old ", a);
    printf("And you Weigh %d kg's at the age of %d\n", b, a);

    printf("Do you want a health advice? (1 for yes, 0 for no): ");
    int choice;
    scanf("%d", &choice);
    int advice = 0;  // advice 0 = it wont give an output before the user inputs a value of 1 or 0 //
     if (choice == 1) {
        printf("You should exercise regularly and maintain a balanced diet.\n");
     }
     if (choice == 0) { 10;

        printf("Okay, Doesn't Matter, HIT THE GYM!!!\n");
     
      }

      return 0;

 }