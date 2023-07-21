#include <stdio.h>

int isPerfectSquare(int num) {
    int i = 1;
    while (i * i <= num) {
        if (i * i == num) {
            return 1; // It is a perfect square
        }
        i++;
    }
    return 0; // It is not a perfect square
}

int canBeConverted(int N, int prevDigit) {
    if (N == 0) {
        return 1;
    }

    int d;
    for (d = prevDigit; d >= 1; d--) {
        int newN = N - d * d;
        if (newN >= 0 && isPerfectSquare(newN)) {
            if (canBeConverted(newN, d)) {
                return 1;
            }
        }
    }

    return 0;
}

int main() {
    int N;
    printf("Enter a positive number: ");
    scanf("%d", &N);

    int prevDigit = N;
    if (canBeConverted(N, prevDigit)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}

