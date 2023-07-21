#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int target ;
    printf("enter target \n");
    scanf ("%d%",&target);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(int j=i + 1 ;j < n ; j++)
        {
            if(arr[i] + arr[j] == target)
            {
                printf("True\n");
                printf("%d + %d = %d\n",arr[i],arr[j],n);
            }
        }
    }
}
