#include <stdio.h>

int main() {
    int decimalNum;
    long long binaryNum = 0;
    int remainder, placeValue = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNum);

    int temp = decimalNum; // Keep original for output

    while (temp > 0) {
        remainder = temp % 2;
        binaryNum += remainder * placeValue;
        temp /= 2;
        placeValue *= 10; // Shift to the next decimal position for printing
    }

    printf("Decimal %d in binary is: %lld\n", decimalNum, binaryNum);
    return 0;
}