#include<stdio.h>
#include<conio.h>
int main()
{
    int n,res=-1;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
      for(int j = i + 1;j < n; j++)
      {
          if(arr[i] < arr[j])
          {
              res = arr[j];
              break;
          }
      }
      printf("%d",res);
    }
}
