#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int n ;
    printf("enter n :");
    scanf("%d",&n);
    int arr[n];
    int i,k,count=0;
    printf("enter k: ");
    scanf("%d",&k);
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<=k;i++)
    {
        int day=arr[i * i];
        int price=day;
        int sell=arr[day + 1];
        int profit=sell - price;
        count =count + profit ;
    }
    printf("Answer : %d",count);



}
