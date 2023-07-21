/*2. The stock span problem is a financial problem where we have a series of n daily price quotes for a stock and we need to calculate the span of stocks price for all n days.
The span Si of the stocks price on a given day i is defined as the maximum number of consecutive days just before the given day, for which the price of the stock on the current day is less than or equal to its price on the given day.
For example, if an array of 7 days prices is given as {100, 80, 60, 70, 60, 75, 85}, then the span values for corresponding 7 days are {1, 1, 1, 2, 1, 4, 6}.
Input:
N = 7, price[] = [100 80 60 70 60 75 85]
Output:
1 1 1 2 1 4 6
Explanation:
Traversing the given input span for 100
will be 1, 80 is smaller than 100 so the
span is 1, 60 is smaller than 80 so the
span is 1, 70 is greater than 60 so the
span is 2 and so on. Hence the output will
be 1 1 1 2 1 4 6.*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];
    int span[n];
    int i, j;

    for (i = 0; i < n; i++)
    {
        printf("Enter price for day %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    span[0] = 1; // The span for the first day is always 1

    for (i = 1; i < n; i++)
    {
        span[i] = 1;
        // Initialize the span for the current day

        // Traverse the prices for the previous days
        for (j = i - 1; j >= 0 && arr[i] >= arr[j]; j--)
            span[i]++;
    }

    printf("Span values: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", span[i]);
    }
    printf("\n");

    return 0;
}

