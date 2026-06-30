#include <stdio.h>
#include <limits.h>

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int firstMax = INT_MIN;
    int secondMax = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (arr[i] > firstMax) {
            secondMax = firstMax;
            firstMax = arr[i];
        } else if (arr[i] > secondMax && arr[i] != firstMax) {
            secondMax = arr[i];
        }
    }

    printf("The second largest element is: %d\n", secondMax);
    return 0;
}
