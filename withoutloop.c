#include<stdio.h>
#include<conio.h>
static int i=1;
int main()
{
    if(i<=50)
    {
        printf("%d",i);
        i++;
    }
    main();

}
