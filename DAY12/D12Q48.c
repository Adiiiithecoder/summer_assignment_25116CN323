#include <stdio.h>

// A perfect number equals the sum of its proper positive divisors (excluding itself)
int isPerfect(int n) {
    int sum = 0;
    
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    
    return (sum == n);
}

int main() {
    int num = 28; // Divisors: 1 + 2 + 4 + 7 + 14 = 28
    if (isPerfect(num)) {
        printf("%d is a Perfect number.\n", num);
    } else {
        printf("%d is not a Perfect number.\n", num);
    }
    return 0;
}
