#include <stdio.h>

// Function returns the larger of two numbers
int findMax(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int x = 45, y = 78;
    printf("Maximum value is: %d\n", findMax(x, y));
    return 0;
}
