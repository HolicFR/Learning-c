#include <stdio.h>

int main() {
    int hours = 2;
    int minutes = 35;
    int seconds = 20;

    int totalSeconds = (hours * 3600) + (minutes * 60) + seconds;

    printf("Total seconds: %d\n", totalSeconds);

    return 0;
}