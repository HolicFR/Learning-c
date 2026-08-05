/*8. volatile vs Normal Variable
Normal	Volatile
int x;	volatile int x;
Compiler can optimize accesses normally	Accesses have special observable behavior
Assumed to change according to normal program execution	May change unexpectedly
Most variables	Hardware registers, some signal/interrupt scenarios
Use by default	Use only when required

So don't start putting volatile everywhere.

This:*/


volatile int age;
volatile float price;
volatile int marks;

THIS IS POINTLESS FOR NORMAL PROGRAMS 

 INSTEAD USE 

 int age;
float price;
int marks;