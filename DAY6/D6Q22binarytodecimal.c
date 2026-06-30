#include <stdio.h>

int main() {
    long long binaryNum;
    int decimalNum = 0, base = 1, remainder;

    printf("Enter a binary number: ");
    scanf("%lld", &binaryNum);

    long long temp = binaryNum; // Keep original for output

    while (temp > 0) {
        remainder = temp % 10;
        decimalNum += remainder * base;
        temp /= 10;
        base *= 2; // Move to the next power of 2
    }

    printf("Binary %lld in decimal is: %d\n", binaryNum, decimalNum);
    return 0;
}