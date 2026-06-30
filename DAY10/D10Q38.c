#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        // Print leading spaces to center-align the pyramid
        for (int space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        // Print stars: (2 * i - 1) gives odd counts (1, 3, 5, 7, 9)
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
