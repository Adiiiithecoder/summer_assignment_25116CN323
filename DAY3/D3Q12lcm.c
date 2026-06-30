#include <stdio.h>

int main() {
    int n1, n2, a, b, temp, gcd, lcm;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    // Using absolute values to handle negative inputs
    a = (n1 < 0) ? -n1 : n1;
    b = (n2 < 0) ? -n2 : n2;

    //Find the GCD using the Euclidean Algorithm
    int x = a, y = b;
    while (y != 0) {
        temp = y;
        y = x % y;
        x = temp;
    }
    gcd = x;

    //Calculate LCM using the formula
    
    lcm = (a / gcd) * b;

    printf("The LCM of %d and %d is: %d\n", n1, n2, lcm);

    return 0;
}