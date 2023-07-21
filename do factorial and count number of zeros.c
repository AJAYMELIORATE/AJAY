#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()
{
    int n ;
    scanf("%d",&n);
    int i,fact,count=0;
    for (i=1;i<=n;i++)
    {
        fact =fact * i;
    }
    printf("the factorial is: %d ",fact );
    while(fact % 10==0)
    {
        count ++;
        fact /=10;
    }
    printf("number of zeros are : %d /n",count);


}
