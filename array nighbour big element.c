#include <stdio.h>
#include <conio.h>
int main()
{
    int n,i,j,count=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {

        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                count =a[i];
            }
        }
    }
    printf("%d",count);
}
