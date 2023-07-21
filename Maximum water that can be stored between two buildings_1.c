#include<stdio.h>
#include<string.h>
#include<conio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int i,count=0,result=0;
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        printf("%d ",a[i]); // Move the printf statement here
    }
    for(i=0;i<=n-2;i++)
    {
        for(int j=i+1;j<=n-2;j++) // Change the inner loop range
        {
            int multi=a[i]*a[j];
            count += multi; // Add multi to count
            if(multi>result) // Compare multi with result
            {
                result = multi;
            }
        }
    }
    printf("%d",result);
    return 0;
}
