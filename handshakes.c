#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
   int n,handshakes ;
   printf("Number of persons :");
   scanf("%d",&n);
   handshakes = n * (n-1) / 2;
   printf("The max number of handshakes that can happen %d \n",handshakes);
}
