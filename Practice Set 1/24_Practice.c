#include <stdio.h>

int main() {
    int money = 3850;

    int notes = money / 500;
    int remaining = money % 500;

    printf("₹500 notes: %d\n", notes);
    printf("Remaining money: ₹%d\n", remaining);

    return 0;
}