#include <stdio.h>
#include <inttypes.h>

int main() {
    int32_t number;

    printf("Enter a number: ");
    scanf("%" SCNd32, &number);

    printf("Number = %" PRId32, number);

    return 0;
}