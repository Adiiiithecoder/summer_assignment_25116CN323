#include <stdio.h>

int main() {
    int arr[] = {23, 5, 89, 1, 42};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    // Assume the first element is both the largest and smallest initially
    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }

    printf("Largest element = %d\n", max);
    printf("Smallest element = %d\n", min);
    return 0;
}
