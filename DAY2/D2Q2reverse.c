#include <stdio.h>

int main() {
    int number, reverse = 0, remainder;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    int temp = number;
    
    while (temp != 0) {
        remainder = temp % 10;
        reverse = reverse * 10 + remainder;
        temp /= 10;
    }
    
    printf("The reversed number is %d\n", reverse);
    
    return 0;
}