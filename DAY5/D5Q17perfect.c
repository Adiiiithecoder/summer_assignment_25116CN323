#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter a number to check: ");
    scanf("%d", &num);

    // Find divisors and sum them up
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    // Check if sum of divisors equals the original number
    if (sum == num && num > 0) {
        printf("%d is a Perfect Number.\n", num);
    } else {
        printf("%d is NOT a Perfect Number.\n", num);
    }

    return 0;
}