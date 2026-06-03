#include <stdio.h>

int main() {
    int start, end, i, j, Prime;

    // User input for the range
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are:\n", start, end);

    for (i = start; i <= end; i++) 
    {
        // 0 and 1 are not prime numbers
        if (i <= 1) 
        {
            continue;
        }

        Prime = 1; 

        for (j = 2; j < i ; j++) 
        {
            if (i % j == 0) 
            {
                Prime = 0; 
                break;
            }
        }

        if (Prime == 1) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}