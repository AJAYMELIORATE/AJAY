#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n ;
    printf("enter n \n");
    scanf("%d",&n);
    int result ;
    if(n % 2 != 0)
    {
        result = n / 2 + 1 ;
    }
    else
    {
        result = n / 2 ;
    }
    printf("%d",result);
}
