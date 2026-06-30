#include <stdio.h>

int main() {
    int n, t1 = 0, t2 = 1, nextTerm = 0;

    printf("Enter the position (n) of Fibonacci term: ");
    scanf("%d", &n);

    if (n == 1) {
        nextTerm = t1;
    } else if (n == 2) {
        nextTerm = t2;
    } else {
        for (int i = 3; i <= n; ++i) {
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
        }
    }

    printf("The %dth Fibonacci term is: %d\n", n, (n == 1) ? 0 : (n == 2) ? 1 : nextTerm);
    return 0;
}
