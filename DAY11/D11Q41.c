#include <stdio.h>

// Simple function to add two numbers
int findSum(int a, int b) {
    return a + b;
}

int main() {
    int num1 = 12, num2 = 25;
    int sum = findSum(num1, num2);
    printf("Sum of %d and %d is: %d\n", num1, num2, sum);
    return 0;
}
