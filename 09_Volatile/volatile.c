#include <stdio.h>

    volatile int flag = 0;
int main() {
    while (!flag);
    return 0;
}

Then compile both with high optimization: gcc -O3 -S volatile.c no_volatile.c