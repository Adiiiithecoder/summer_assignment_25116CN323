#include <stdio.h>

int main() {
    int number, reverse = 0, remainder;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    int temp = number;
    
    while (temp > 0) {
        remainder = temp % 10;
        reverse = reverse * 10 + remainder;
        temp /= 10;
    }
    
    if (number == reverse) {
        printf("The number is a palindrome\n");
    } else {
        printf("The number is not a palindrome\n");
    }
    
    return 0;
}