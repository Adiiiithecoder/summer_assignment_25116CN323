#include <stdio.h>

int main() {
    int arr[] = {4, 3, 2, 7, 8, 2, 3, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Duplicate elements in given array: \n");
    // Nested loop strategy to check pairs for duplicates
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                break; // Break prevents counting the same duplicate multiple times
            }
        }
    }
    printf("\n");
    return 0;
}
