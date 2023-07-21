#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,count=0,result;
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        printf("%d",a[i]);
    }

    for(i=0;i<=n-2;)
    {
        for(int j=1;j<=n-2;j++)
        {
            int multi=a[i]*a[j];
            count=multi;
            if(multi>count)
            {
                result = multi;
            }
        }
    }
    printf("%d",result);


}
