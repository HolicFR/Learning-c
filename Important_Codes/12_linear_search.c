#include <stdio.h>

int main(void) {
    int arr[10], key, found = 0;
    printf("Enter 10 numbers: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value to search: ");
    scanf("%d", &key);

    for (int i = 0; i < 10; i++) {
        if (arr[i] == key) {
            printf("Found at index %d\\n", i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Not found\\n");
    }
    return 0;
}

// contribution batch 12
