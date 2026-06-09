#include <stdio.h>
#include <math.h>

int main() {
    int low, high, number, originalNum, remainder, count, result;

    printf("Enter lower limit and upper limit: ");
    scanf("%d %d", &low, &high);

    printf("Armstrong numbers between %d and %d are: \n", low, high);

    for (number = low + 1; number < high; ++number) {
        originalNum = number;
        count = 0;

        // Count number of digits
        while (originalNum != 0) {
            originalNum /= 10;
            ++count;
        }

        originalNum = number;
        result = 0;

        // Calculate sum of powers
        while (originalNum != 0) {
            remainder = originalNum % 10;
            result += pow(remainder, count);
            originalNum /= 10;
        }

        // If it matches, print the number
        if ((int)result == number) {
            printf("%d ", number);
        }
    }
    
    printf("\n");
    return 0;
}