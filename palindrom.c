#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    char a[50];
    scanf("%s",&a);
    int i;
    int len=strlen(a);
    for(i=len-1;i>=0;i--)
    {
        printf("%c",a[i]);
    }
    if(a==a[i])
        {
            printf("\npalindrom");
        }
        else
        {
            printf("\nnot palindrom ");
        }

}
