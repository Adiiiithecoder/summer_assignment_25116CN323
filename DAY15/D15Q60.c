#include <stdio.h>

int main() {
    int arr[] = {1, 0, 4, 3, 0, 0, 6, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    int count = 0; // Tracks the position for non-zero elements

    // Move all non-zero elements forward
    for (int i = 0; i < size; i++) {
        if (arr[i] != 0) {
            arr[count] = arr[i];
            count++;
        }
    }

    // Fill up the rest of the array positions with zeroes
    while (count < size) {
        arr[count] = 0;
        count++;
    }

    printf("Array after moving zeroes to end: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
