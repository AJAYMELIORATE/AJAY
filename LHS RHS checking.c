#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    int arr[n];
    scanf("%d",&n);
    int i,j,count=0;
    for(i=1;i*i<n;i++)
    {
        arr[count]=i*i;
        count++;
    }
    for(i=1;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i] + arr[j]==n)
            {
                printf("THE K -VALUE :%d AND THE D-VALUE: %d.",arr[i],arr[j]);
                break;
            }
            else
            {
                printf("NO :");

            }
        }
    }
}
