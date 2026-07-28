#include <stdio.H>

//Here if i use return 0; after void greet it wont't return the value because it does nothing. only int and other Data types can return the value. 

void greet() {
    printf("Hello i am void\n");
}
// Till here if i run the code it wont output any value and return with error.
// But if i use int main things will change
int main() {
    greet();

    return 0;

}

// This will now print the statement provided in the printf function of Void greet before int main () 