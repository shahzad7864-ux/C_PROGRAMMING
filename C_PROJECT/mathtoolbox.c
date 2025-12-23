#include <stdio.h>

// Recursive Factorial
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;   // Base case
    return n * factorial(n - 1);
}

// Recursive Fibonacci
int fibonacci(int n) {
    if (n == 0)
        return 0;   // First Fibonacci number
    if (n == 1)
        return 1;   // Second Fibonacci number
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Recursive Power
int power(int base, int exp) {
    if (exp == 0)
        return 1;   // Any number power 0 is 1
    return base * power(base, exp - 1);
}

int main() {
    int choice, n, base, exp;

    while (1) {
        printf("\n=== Recursive Math Toolbox ===\n");
        printf("1. Factorial\n");
        printf("2. Fibonacci\n");
        printf("3. Power\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 4) {
            printf("Exiting program...\n");
            break;   // Exit loop
        }

        switch (choice) {

        case 1:
            printf("Enter a number: ");
            scanf("%d", &n);
            if (n < 0)
                printf("Factorial not defined for negative numbers.\n");
            else
                printf("Factorial of %d = %d\n", n, factorial(n));
            break;

        case 2:
            printf("Enter number of terms: ");
            scanf("%d", &n);
            if (n < 0)
                printf("Invalid input.\n");
            else {
                printf("Fibonacci Series: ");
                for (int i = 0; i < n; i++)
                    printf("%d ", fibonacci(i));
                printf("\n");
            }
            break;

        case 3:
            printf("Enter base and exponent: ");
            scanf("%d %d", &base, &exp);
            if (exp < 0)
                printf("Exponent must be non-negative.\n");
            else
                printf("%d^%d = %d\n", base, exp, power(base, exp));
            break;

        default:
            printf("Invalid choice.\n");
        }
    }

    return 0;   
}
