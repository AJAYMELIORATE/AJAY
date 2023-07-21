#include<stdio.h>
#include<stdlib.h>
#define max 100
int a[max],n,top=-1,i;

int main()
{
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        top++;
        scanf("%d",&a[top]);
    }
    int x=top;
    int y=top-1;
    while(x>0 && y>0)
    {
            if(a[x]>a[y])
            {
                int temp=a[x];
                a[x]=a[y];
                a[y]=temp;
            }
            y--;
        x--;
    }
    int temp=top;

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
        top--;
    }
}
