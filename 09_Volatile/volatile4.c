// Imagine you're programming a microcontroller.

volatile int buttonPressed = 0;

while (buttonPressed == 0) {
    // wait for button
}


/*The CPU isn't necessarily changing buttonPressed.

The hardware or an interrupt might change it.

Conceptually:

Program
   │
   │ keeps checking
   ▼
buttonPressed = 0
   │
   │
Hardware button pressed
   │
   ▼
buttonPressed = 1
   │
   ▼
Program sees the new value


Without volatile, compiler optimization can interfere with this kind of polling.
*/
