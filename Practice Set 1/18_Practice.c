#include <stdio.h>

int main() {
    int minutes = 185;

    int hours = minutes / 60;
    int remainingMinutes = minutes % 60;

    printf("%d minutes = %d hours %d minutes\n",
           minutes, hours, remainingMinutes);

    return 0;
}