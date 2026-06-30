#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        // Print alignment spaces
        for (int space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        
        // Ascending characters starting from 'A'
        char ch = 'A';
        for (int j = 1; j <= i; j++) {
            printf("%c", ch);
            ch++;
        }
        
        // Descending characters
        ch -= 2; // Step back past the middle peak character
        for (int j = i - 1; j >= 1; j--) {
            printf("%c", ch);
            ch--;
        }
        printf("\n");
    }
    return 0;
}
