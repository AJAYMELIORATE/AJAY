//Write a recursive c code to find Fibonacci of a number ‘n’
//Constraint: Reduce the number of recursive function calls made by storing the results of similar looking sub problems.
#include <stdio.h>

// Global array to store previously computed Fibonacci numbers
int memo[100] = {0};

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int fib = 0, fib1 = 0, fib2 = 1;
    if (n == 0) {
        fib = fib1;
    } else if (n == 1) {
        fib = fib2;
    } else {
        // Check if the value of fibonacci(n) has already been computed
        if (memo[n] != 0) {
            fib = memo[n];
        } else {
            // Compute and store the value of fibonacci(n)
            for (int i = 2; i <= n; i++) {
                fib = fib1 + fib2;
                fib1 = fib2;
                fib2 = fib;

                memo[i] = fib;
            }
        }
    }

    printf("Fibonacci of %d is %d\n", n, fib);
    return 0;
}
