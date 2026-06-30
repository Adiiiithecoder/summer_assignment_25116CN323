#include <stdio.h>

int factorial(int n) {
    // Base case: 0! or 1! is always 1
    if (n <= 1) {
        return 1;
    }
    
    // Recursive case: n * (n-1)!
    return n * factorial(n - 1);
}

int main() {
    int result = factorial(5);
    printf("Factorial of 5 is: %d\n", result); // Output: 120
    return 0;
}
