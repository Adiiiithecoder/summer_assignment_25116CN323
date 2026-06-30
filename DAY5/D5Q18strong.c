#include <stdio.h>

int main() {
    int num, originalNum, remainder, sum = 0;
    long fact;

    printf("Enter a number to check: ");
    scanf("%d", &num);

    originalNum = num;

    // Isolate each digit
    while (originalNum > 0) {
        remainder = originalNum % 10;
        
        // Calculate factorial of the digit
        fact = 1;
        for (int i = 1; i <= remainder; i++) {
            fact *= i;
        }

        sum += fact;
        originalNum /= 10;
    }

    // Check if the sum of factorials matches the original number
    if (sum == num) {
        printf("%d is a Strong Number.\n", num);
    } else {
        printf("%d is NOT a Strong Number.\n", num);
    }

    return 0;
}