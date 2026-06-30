#include <stdio.h>

int main() {
    int arr[] = {4, 2, 9, 7, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int searchTarget = 7;
    int foundIndex = -1;

    for (int i = 0; i < size; i++) {
        if (arr[i] == searchTarget) {
            foundIndex = i;
            break; // Target found, stop looking
        }
    }

    if (foundIndex != -1) {
        printf("Element %d found at index %d.\n", searchTarget, foundIndex);
    } else {
        printf("Element %d not found in the array.\n", searchTarget);
    }
    return 0;
}
