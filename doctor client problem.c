/*2.
A doctor has a clinic where he serves his patients. The doctor’s consultation fees are different for different groups of patients depending on their age. If the patient’s age is below 17, fees is 200 INR. If the patient’s age is between 17 and 40, fees is 400 INR. If patient’s age is above 40, fees is 300 INR. Write a code to calculate earnings in a day for which one array/List of values representing age of patients visited on that day is passed as input.
Note:
•	Age should not be zero or less than zero or above 120
•	Doctor consults a maximum of 20 patients a day
•	Enter age value (press Enter without a value to stop):
Example 1:
•	Input
20
30
40
50
2
3
14

•	Output
Total Income 2000 INR */



#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i,t=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if (a[i] < 17)
        {
            t = t + 200;
        }
        else if(a[i] >=17  || a[i] <= 40)
        {
            t = t + 400;
        }
        else if(a[i]>40)
        {
            t = t + 300;
        }
    }
    printf("Total income: %d INR",t);
}
