/* Create a simple login system.
Ask the user for:
Username
Password 

If the username is correct, then check the password.

Use:
Username: admin
Password: 1234

Expected outputs:
Correct username + password
Login successful

Correct username + wrong password
Wrong password

Wrong username
Invalid username */

#include <stdio.h>
#include <string.h>
int main() {

        char username[20];
        int password;

        printf("Enter Username: ");
        scanf("%s", username);

        printf("Enter password: ");
        scanf("%d", &password);

        if (strcmp(username, "admin") == 0) {

            if (password == 1234) {
                printf("Login succesful");
            } else {
                printf("Wrong password");
            }
        } else {
            printf("Invalid Username");
        }

    return 0;
}

