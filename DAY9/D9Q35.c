#include <stdio.h>

int main() {
    int rows = 5;
    char ch = 'A';

    // Outer loop moves through rows and characters
    for (int i = 1; i <= rows; i++) {
        // Inner loop prints the same character 'i' times
        for (int j = 1; j <= i; j++) {
            printf("%c", ch);
        }
        ch++; // Move to the next character for the next row
        printf("\n");
    }
    return 0;
}
