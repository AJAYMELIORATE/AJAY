#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int n,i;
    printf("enter n");
    scanf("%d",&n);
    if(n % 8 == 1 )
    {
        printf("THUMB finger");
    }
    else if(n % 8 == 5)
    {
        printf("LITTLE FINGER");
    }
    else if ( n % 8 == 3 || n % 8 == 7)
    {
        printf("MIDDLE FINGER");
    }
    else if( n % 8 == 2 || n % 8 ==0)
    {
        printf("POINTER .");
    }
    else if (n % 8==2 || n % 8 == 6)
    {
        printf("SMALL FINGER");
    }
}
