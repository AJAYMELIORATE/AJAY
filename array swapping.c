#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    char a[n];
    char goal[n];

    int i,j,temp;
    printf("enter the check strings :");
    for(i=0;i<=n;i++)
    {
        scanf("%c",&a[i]);
    }
    printf("enter the goal strngs: ");
    for(i=0;i<=n;i++)
    {
        scanf("%c",&goal[i]);
    }
    for(i=0;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(a[i]!=goal[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("%c",&temp);
}
