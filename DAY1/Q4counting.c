#include <stdio.h>

int main() {
    int number, count = 0;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    int temp = number;
    
    if (temp == 0) {
        count = 1;
    } else {
        if (temp < 0) {
            temp = -temp;
        }
        while (temp > 0) {
            temp /= 10;
            count++;
        }
    }
    
    printf("The number of digits is %d\n", count);
    
    return 0;
}