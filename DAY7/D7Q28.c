#include <stdio.h>

// This helper function does the actual recursive tracking
int reverse_worker(int n, int current_reverse) {
    // Base case: no digits left to flip
    if (n == 0) {
        return current_reverse;
    }
    
    int last_digit = n % 10;
    int updated_reverse = (current_reverse * 10) + last_digit;
    
    // Recursive case: pass the stripped number and our new progress
    return reverse_worker(n / 10, updated_reverse);
}

// The clean, main function the user actually calls
int reverseNumber(int n) {
    // Special case for 0
    if (n == 0) return 0; 
    
    // Start the recursive tracking with a current reverse of 0
    return reverse_worker(n, 0);
}

int main() {
    int result = reverseNumber(12345);
    printf("12345 reversed is: %d\n", result); // Output: 54321
    return 0;
}
