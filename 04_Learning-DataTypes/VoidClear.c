#include <stdio.h>

// A void function performs a task but DOES NOT return a value.
void greet() {
    printf("Hello, I am void!\n");
    // If you wrote: return 0; here, it would cause an error
    // because a void function cannot return a value.
}

int main() {

    // Every C program starts execution from main().
    // It does NOT start from greet().

    // Calling the greet() function.
    greet();

    // After greet() finishes, control comes back to main().

    // Returning 0 tells the operating system that
    // the program ended successfully.
    return 0;
}

