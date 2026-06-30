#include <stdio.h>

int main() {
    int arr[] = {12, 37, 44, 95, 8, 21};
    int size = sizeof(arr) / sizeof(arr[0]);
    int evenCount = 0;
    int oddCount = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    printf("Total Even elements = %d\n", evenCount);
    printf("Total Odd elements = %d\n", oddCount);
    return 0;
}
