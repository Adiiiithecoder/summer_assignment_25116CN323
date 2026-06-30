#include <stdio.h>

int main() {
    int size = 5;

    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            // Print a star if it's the first or last row, or first or last column
            if (i == 1 || i == size || j == 1 || j == size) {
                printf("*");
            } else {
                printf(" "); // Hollow space inside
            }
        }
        printf("\n");
    }
    return 0;
}
