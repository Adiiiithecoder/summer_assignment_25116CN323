#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    int temp = num;

    // Brian Kernighan's Algorithm
    while (temp > 0) {
        temp = temp & (temp - 1);
        count++;
    }

    printf("Number of set bits (1s) in %d is: %d\n", num, count);
    return 0;
}