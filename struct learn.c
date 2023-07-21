#include<stdio.h>
struct player
{
    char str[100];
    int runs;
};
int main()
{
    struct player a[11];
    int sum=0,i;
    for(i=0;i<=10;i++)
    {
        scanf("%s",a[i].str);
        scanf("%d",&a[i].runs);
    }
    for(i=0;i<=10;i++)
        sum+=a[i].runs;
    printf("%d\t",sum);
}
