#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        // Print spaces for alignment
        for (int space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        
        // Print ascending part of the pattern (e.g., 1 to i)
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        
        // Print descending part of the pattern (e.g., i-1 down to 1)
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
