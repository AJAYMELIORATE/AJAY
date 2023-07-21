#include<stdio.h>
#include <math.h>
#include <conio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d",&n);
    int nut[n];
    int bolt[n];
    int i,j,temp=0,swap=0;
    printf("nuts :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&nut[i]);
    }
    printf(" Bolts :");
    for(j=0;j<n;j++)
    {
        scanf("%d",&bolt[j]);
    }
    for(i=0;i<n;i++)
    {
        if(nut[i]>nut[i+1])
        {
            temp=nut[i];
            nut[i]=nut[i+1];
            nut[i+1]=temp;
        }
    }
    printf("%d",nut[i]);
    for(j=0;j<n;j++)
    {
        if(bolt[j]>bolt[j+1])
        {
            swap=bolt[i];
            bolt[i]=bolt[i+1];
            bolt[i+1]=swap;
        }
    }
    printf("%d",bolt[i]);



}
