#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    // Save the first element
    int first = arr[0];

    // Shift everything one slot to the left
    for (int i = 0; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
    // Place the first element at the end
    arr[size - 1] = first;

    printf("Array after left rotation: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
