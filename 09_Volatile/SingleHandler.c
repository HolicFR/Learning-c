#include <stdio.h>
#include <signal.h>

volatile sig_atomic_t stop = 0;

void handleSignal(int signal) {
    stop = 1;
}

int main(void) {
    signal(SIGINT, handleSignal);

    printf("Program running...\n");
    printf("Press Ctrl+C to stop.\n");

    while (!stop) {
        // Keep running
    }

    printf("\nSignal received. Program stopped safely.\n");

    return 0;
}