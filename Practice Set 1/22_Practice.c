#include <stdio.h>

int main() {
    int seconds = 845;

    int minutes = seconds / 60;
    int remainingSeconds = seconds % 60;

    printf("%d seconds = %d minutes %d seconds\n",
           seconds, minutes, remainingSeconds);

    return 0;
}