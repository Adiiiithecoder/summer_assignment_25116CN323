#include <stdio.h>

int main() {
    int rows = 5; // Total number of lines to print

    // Outer loop for handling rows
    for (int i = 1; i <= rows; i++) {
        // Inner loop for printing stars in each row
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        // Move to the next line after finishing the row
        printf("\n");
    }

    return 0;
}
