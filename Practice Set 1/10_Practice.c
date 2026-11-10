#include <stdio.h>

int main() {

    int seconds;
    int minutes;
    int remainingSeconds;

    printf("Enter seconds: ");
    scanf("%d", &seconds);

    minutes = seconds / 60;
    remainingSeconds = seconds % 60;

    printf("Minutes: %d\n", minutes);
    printf("Remaining Seconds: %d", remainingSeconds);

    return 0;
}