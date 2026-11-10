

YOU CAN EVEN COMBINE 

const volatile int status;
At first this sounds contradictory.

const

Your code isn't allowed to modify it:

status = 10; // ❌
volatile

But its value can still change externally.

So:

const volatile int status;

means:

"My code cannot modify this value, but something outside my normal program flow might."

This is useful for read-only hardware status registers.