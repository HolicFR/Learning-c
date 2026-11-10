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

// HERE 
// volatile sig_atomic_t stop = 0;
// The normal execution of main() doesn't change stop
// 
// 
//  INSTEAD : 
/*       main()
 │
 ▼
stop = 0
 │
 ▼
while (!stop)
 │
 │     User presses Ctrl+C
 │             ↓
 │       handleSignal()
 │             ↓
 │         stop = 1
 │             ↓
 └────────► loop ends*/ 
// This is a much better demonstration of why volatile exists.

sig_atomic_t is also used because it is a type intended for safe access in this signal-handler context.

