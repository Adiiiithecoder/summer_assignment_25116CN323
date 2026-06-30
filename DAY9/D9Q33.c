#include <stdio.h>

int main() {
    int rows = 5;

    // Loop backwards from total rows down to 1
    for (int i = rows; i >= 1; i--) {
        // Print 'i' stars for the current row
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
