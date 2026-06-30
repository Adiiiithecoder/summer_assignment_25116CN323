#include <stdio.h>
#include <math.h>

// An Armstrong number equals the sum of its digits raised to the power of the number of digits
int isArmstrong(int n) {
    int original = n;
    int temp = n;
    int digits = 0;
    int sum = 0;
    
    // Count the number of digits
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    
    temp = n;
    // Compute the sum of powers
    while (temp > 0) {
        int remainder = temp % 10;
        sum += round(pow(remainder, digits)); // round avoids floating-point precision issues
        temp /= 10;
    }
    
    return (sum == original);
}

int main() {
    int num = 153; // 1^3 + 5^3 + 3^3 = 153
    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }
    return 0;
}
