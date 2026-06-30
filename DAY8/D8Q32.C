#include <stdio.h>

int main() {
    int rows = 5;

    // Outer loop handles the rows
    for (int i = 1; i <= rows; i++) {
        // Inner loop prints the current row number 'i', 'i' times
        for (int j = 1; j <= i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}
