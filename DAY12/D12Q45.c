#include <stdio.h>

// Returns 1 if the number reads the same forwards and backwards
int isPalindrome(int n) {
    int original = n;
    int reversed = 0;
    
    while (n > 0) {
        int remainder = n % 10;
        reversed = (reversed * 10) + remainder;
        n /= 10;
    }
    
    return (original == reversed);
}

int main() {
    int num = 121;
    if (isPalindrome(num)) {
        printf("%d is a Palindrome.\n", num);
    } else {
        printf("%d is not a Palindrome.\n", num);
    }
    return 0;
}
