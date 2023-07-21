/*1.Print an integer representing the total sales value of the two highest selling
products on the Website.
Constraints
2 ≤ numProducts ≤ 106
Note
More than one product can have a similar sales value.
Example
Input
5
15 26 13 7 45
Output
71*/


#include <stdio.h>
#include <math.h>
#include <conio.h>
 int main()
 {
     int n;
     printf("enter n : ");
     scanf("%d",&n);
     int arr[n],i,j,temp=0;
     for(i=0;i<n;i++)
     {
         scanf("%d",&arr[i]);
     }
     for(i=0;i<n;i++)
     {
         for(j=i+1;j<n;j++)
         {
             if(arr[i]<arr[j])
             {
                 temp=arr[i];
                 arr[i]=arr[j];
                 arr[j]=temp;
             }
         }
     }
     for(i=0;i<2;i++)
     {
         printf("%d",arr[i]);
     }

 }
