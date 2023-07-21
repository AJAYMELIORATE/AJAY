#include <stdio.h>
#include <math.h>
#include <conio.h>
 int main()
 {
     char str[100] ;
     scanf ("%s",str);
     int m=strlen(str);
     int i,count=0;

     for(i=0;i<m;i++)
     {
        if(str[i]=='!'||str[i]=='@'||str[i]=='#'||str[i]=='%'||str[i]=='^'||str[i]=='$')
         {
             count++;
         }
     }
     printf("%d",count);
 }
