// Char Type Logical Operators

#include <stdio.h>
    int main() {

        char a = 'a';
        char b = '\0'; // Null Character

        if (a && b){
            printf("Line 1 - Condition is True\n");
        }

        if (a || b){
            printf("Line 2 - Condition is true\n");
        }

        return 0;

    }


    // Logical operators are generally used to build a compound boolean expression. Along with relational operators, logical operators too are used in decision-control and looping statements in C.