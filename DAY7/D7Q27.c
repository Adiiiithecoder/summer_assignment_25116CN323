#include <stdio.h>

int sumOfDigits(int n) {
    // Base case: if the number is down to a single digit, just return it
    if (n < 10) {
        return n;
    }
    
    // Recursive case: last digit + sum of whatever is left
    int last_digit = n % 10;
    int remaining_digits = n / 10;
    
    return last_digit + sumOfDigits(remaining_digits);
}

int main() {
    int result = sumOfDigits(1234);
    printf("Sum of digits for 1234 is: %d\n", result); // Output: 10
    return 0;
}
