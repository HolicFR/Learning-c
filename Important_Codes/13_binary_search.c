#include <stdio.h>

int binarySearch(int arr[], int low, int high, int key) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) return mid;
        if (arr[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int main(void) {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int key = 14;
    int index = binarySearch(arr, 0, 9, key);
    printf("%s\\n", index != -1 ? "Found" : "Not found");
    return 0;
}

// contribution batch 13
