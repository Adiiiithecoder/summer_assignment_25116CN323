#include <stdio.h>

int main() {
    int rows = 5;

    // Outer loop handles the rows
    for (int i = 1; i <= rows; i++) {
        // Inner loop prints numbers from 1 up to the current row number
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        // Jump to the next line
        printf("\n");
    }

    return 0;
}
