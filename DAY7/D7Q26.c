#include <stdio.h>

int fibonacci(int n) {
    // Base cases: position 0 is 0, position 1 is 1
    if (n == 0) return 0;
    if (n == 1) return 1;
    
    // Recursive case: add the two numbers that came before it
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int result = fibonacci(6);
    printf("Fibonacci number at index 6 is: %d\n", result); // Output: 8
    return 0;
}
