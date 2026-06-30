#include <stdio.h>

int main() {
    long long num, maxPrime = -1;

    printf("Enter a number: ");
    scanf("%lld", &num);

    // Step 1: Divide out all the 2s
    while (num % 2 == 0) {
        maxPrime = 2;
        num /= 2;
    }

    // Step 2: Loop through odd numbers up to the square root of the remaining number
    for (int i = 3; i * i <= num; i += 2) {
        while (num % i == 0) {
            maxPrime = i;
            num /= i;
        }
    }

    // Step 3: If the remaining number is still greater than 2, it must be prime
    if (num > 2) {
        maxPrime = num;
    }

    printf("The largest prime factor is: %lld\n", maxPrime);

    return 0;
}