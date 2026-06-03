#include <stdio.h>

int main() {
    int number, sum = 0, remainder;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    int temp = number;
    if (temp < 0) {
        temp = -temp;
    }
    
    while (temp > 0) {
        remainder = temp % 10;
        sum += remainder;
        temp /= 10;
    }
    
    printf("The sum of digits is %d\n", sum);
    
    return 0;
}