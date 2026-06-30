#include <stdio.h>

int main() {
    int rows = 5;

    // Outer loop handles the rows
    for (int i = 1; i <= rows; i++) {
        // Start printing characters from 'A'
        char ch = 'A';
        
        // Inner loop prints characters based on current row count
        for (int j = 1; j <= i; j++) {
            printf("%c", ch);
            ch++; // Move to the next character (B, C, etc.)
        }
        printf("\n");
    }

    return 0;
}
