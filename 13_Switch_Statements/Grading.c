#include <stdio.h>  
    int main() {
            char grade = 'B';

            switch(grade){
                case 'A' :
                printf("OutStanding!\n");
                break;
                case 'B' :
                printf("Excellent!\n");
                break;
                case 'C':
                printf("Welldone!\n");
                break;
                case 'D' :
                printf("Good\n");
                break;
                case 'F' :
                printf("Fail");
                break;
                default : 
                printf("Invalid Grade\n");
            }
            printf("Your Grade is %c\n", grade);
            
            return 0;
        }