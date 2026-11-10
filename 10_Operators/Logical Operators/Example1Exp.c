```c
#include <stdio.h>

int main() {
    int a = 5;
    int b = 20;

    // In C, any non-zero value is considered TRUE.
    // So a = 5 is TRUE and b = 20 is TRUE.
    
    // && (Logical AND) requires BOTH conditions to be true.
    // a && b → TRUE && TRUE → TRUE
    // Therefore, this if block runs.
    if (a && b) {
        printf("Line 1 - Condition is true\n");
    }

    // || (Logical OR) requires AT LEAST ONE condition to be true.
    // a || b → TRUE || TRUE → TRUE
    // Both happen to be true here, so the condition is true.
    if (a || b) {
        printf("Line 2 - Condition is true\n");
    }


    /* Let's change the value of a and b */

    a = 0;
    b = 10;

    // Now:
    // a = 0  → FALSE
    // b = 10 → TRUE

    // && requires BOTH sides to be true.
    // a && b → FALSE && TRUE → FALSE
    //
    // Since the condition is false, the if block is skipped
    // and the else block runs instead.
    if (a && b) {
        printf("Line 3 - Condition is true\n");
    } else {
        printf("Line 3 - Condition is not true\n");
    }


    // ! is the Logical NOT operator.
    // It reverses the result:
    // TRUE  → FALSE
    // FALSE → TRUE
    //
    // First, C evaluates what is inside the parentheses:
    //
    // a && b
    // FALSE && TRUE → FALSE
    //
    // Then ! reverses FALSE:
    //
    // !FALSE → TRUE
    //
    // Therefore, this if block runs.
    if (!(a && b)) {
        printf("Line 4 - Condition is true\n");
    }

    return 0;
}
```
