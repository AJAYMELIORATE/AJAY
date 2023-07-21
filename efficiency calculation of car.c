#include<stdio.h>
#include<math.h>
int main()
{
    int a1 , a2 , b1 , b2 , c1 , c2 , d1 , d2 ,e1 ,e2 ;
    printf("enter the proper values for the petrol car : \n");
    scanf ("%d %d %d %d %d",&a1,&b1,&c1,&d1,&e1);
    printf("enter the proper values for the diesel car : \n");
    scanf ("%d %d %d %d %d",&a2,&b2,&c2,&d2,&e2);
    int result_1=c1+(((d1 / a1)*b1)*60)+(60*e1);
    printf("The total cost of petrol :%d INR",result_1);
    int result_2=c2+(((d2 / a2)*b2)*60)+(60*e2);
    printf("The total cost of diesel :%d INR",result_2);
    if(result_1 < result_2)
    {
        printf("THE MORE EFFICIENT STREAM IS PETROL STREAM \n");
    }
    else
    {
        printf("THE MORE EFFICIENT STREAM IS THE DIESEL STREAM \n");
    }

}
