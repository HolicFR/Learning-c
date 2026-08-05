#include <stdio.h>
#include <stdint.h>

/*
    Example only.

    Imagine address 0x40000000 belongs to a hardware
    status register on a microcontroller.
*/

#define STATUS_REGISTER (*(volatile uint32_t *)0x40000000)

int main(void) {

    while ((STATUS_REGISTER & 1U) == 0U) {
        // Wait until hardware sets bit 0
    }

    return 0;
}

/* ⚠️ Don't run this on your normal PC.

It's educational embedded-C code. 0x40000000 isn't a valid hardware register for your Windows program and accessing it could crash the program. */

// But this demonstrates one of the real reasons volatile exists.

// I RAN THIS ON MY PC AND NOTHING HAPPENED BTW