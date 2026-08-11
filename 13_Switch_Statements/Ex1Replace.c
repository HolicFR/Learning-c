#include <stdio.h>

int main() {

        char ch = 'm';
        printf("Time Code: %c\n\n", ch);

        switch (ch){
            case 'a':
            printf("Good Afternoon\n");
            break;
            
            case 'e':
            printf("Good Evening\n");
            break;

            case 'm':
            printf("Good Morning\n");
            break;
        }

    return 0;
}