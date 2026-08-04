#include <stdio.h>

int main() {
    int days = 25;
    int weeks = days / 7;
    int remainingDays = days % 7;

    printf("%d days = %d weeks and %d days\n",
           days, weeks, remainingDays);

    return 0;
}