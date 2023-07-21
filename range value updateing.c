#include <stdio.h>
#include <math.h>
#include <conio.h>
 int main()
 {
     int n,range;
     printf("ENTER THE N VALUE :");
     scanf("%d",&n);

     for(int i=1 ;i<=n;i++)
     {
         printf("ITERATION %d:",i);
         int starting,ending,value;
         printf("ENTER THE STARRTING VALUE :");
         scanf("%d",&starting);
         printf("ENTER THE ENDING VALUE :");
         scanf("%d",&ending);
         printf("ENTER THE VALUE TO BE ENTERED:");
         scanf("%d",&value);
         printf("range %d - %d =%d ",starting,ending,value);

     }
 }
