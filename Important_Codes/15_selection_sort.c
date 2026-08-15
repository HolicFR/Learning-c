#include <stdio.h>

int main(void) {
    int arr[5] = {9, 1, 5, 3, 7};

    for (int i = 0; i < 5; i++) {
        int minIndex = i;
        for (int j = i + 1; j < 5; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    printf("Sorted array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\\n");
    return 0;
}
