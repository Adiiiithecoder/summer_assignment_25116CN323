#include <stdio.h>

int main() {
    int number, product = 1, remainder;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    int temp = number;
    if (temp == 0) {
        product = 0;
    } else {
        if (temp < 0) {
            temp = -temp;
        }
        while (temp > 0) {
            remainder = temp % 10;
            product *= remainder;
            temp /= 10;
        }
    }
    
    printf("The product of digits is %d\n", product);
    
    return 0;
}