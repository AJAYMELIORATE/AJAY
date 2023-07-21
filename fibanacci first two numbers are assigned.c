#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum,n1=1,n2=1;
    scanf("%d",&n);
    for(int i=3;i<=Nn;i++)
    {
        sum=n1 + n2 ;
        n1 =n2;
        n2 =sum ;
    }
    printf("%d",sum );
}
