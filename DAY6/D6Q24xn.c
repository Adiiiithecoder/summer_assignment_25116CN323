#include <stdio.h>

int main() {
    double base, result = 1.0;
    int exponent, absExponent;

    printf("Enter base (x): ");
    scanf("%lf", &base);
    printf("Enter exponent (n): ");
    scanf("%d", &exponent);

    // Handle negative exponents by working with absolute values first
    absExponent = (exponent < 0) ? -exponent : exponent;

    // Multiply base 'absExponent' times
    for (int i = 1; i <= absExponent; i++) {
        result *= base;
    }

    // If exponent was negative, take the reciprocal
    if (exponent < 0) {
        result = 1.0 / result;
    }

    printf("%.2lf^%d = %.6lf\n", base, exponent, result);
    return 0;
}