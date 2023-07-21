//2. Given a sorted array and a number x, find a pair in an array whose sum is closest to x.
//Examples:
//Input: arr[] = {10, 22, 28, 29, 30, 40}, x = 54
//Output: 22 and 30
//Input: arr[] = {1, 3, 4, 7, 10}, x = 15
//Output: 4 and 10
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[n], i, j;
    int target;
    printf("Enter the target element: ");
    scanf("%d",&target);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int res1 = 0, res2 = 0;
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i] + a[j] == target)
            {
                res1 = a[i];
                res2 = a[j];
            }
            if(a[i] + a[j] < target)
            {
                if(a[i] + a[j] > res1 + res2)
                {
                    res1 = a[i];
                    res2 = a[j];
                }
            }
        }
    }
    printf("%d AND %d", res1, res2);
    return 0;
}
