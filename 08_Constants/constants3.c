#include <stdio.h>

int main() {
    const int minutesPerHour = 60;
    return 0;
}

// This will work because constant variable is mentioned

// When you declare a constant variable, it must be assigned with a value:


#include <stdio.h>

int main() {

const int minutesPerHour;
minutesPerHour = 60; // error

}

// This will throw an error because the variable is declared after the const int line