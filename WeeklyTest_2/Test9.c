#include <stdio.h>
#include <stdint.h>

int main() {
    int32_t number;

    printf("Enter a number: ");
    scanf("%" SCNd32, &number);

    printf("Number = %" PRId32, number);

    return 0;
}