#include <stdio.h>

// Returns 1 if prime, 0 if not prime
int isPrime(int n) {
    if (n <= 1) return 0; // Numbers <= 1 aren't prime
    
    // Check if any number from 2 up to n/2 divides it cleanly
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return 0; // Divisible, so not prime
        }
    }
    return 1; // It's prime
}

int main() {
    int num = 29;
    if (isPrime(num)) {
        printf("%d is a Prime number.\n", num);
    } else {
        printf("%d is not a Prime number.\n", num);
    }
    return 0;
}
