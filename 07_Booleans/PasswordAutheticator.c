#include <stdio.h> 
#include <stdbool.h>

int main(void) {
    int correctPassword = 12345;
    int enteredPassword;

    printf("Enter Your Password: ");
    scanf("%d", &enteredPassword);

    bool passwordCorrect = (enteredPassword == correctPassword); // IMPORTANT

    if (passwordCorrect) {
        printf("Login Succesfull");

    } else {
        printf("Wrong Password!\n");

    }    
        return 0;

}