#include <stdio.h>

int main() {
    float price = 1500;
    float discount = 20;

    float discountAmount = price * discount / 100;
    float finalPrice = price - discountAmount;

    printf("Original Price: %.2f\n", price);
    printf("Discount: %.2f\n", discountAmount);
    printf("Final Price: %.2f\n", finalPrice);

    return 0;
}