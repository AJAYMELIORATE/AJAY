#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    char dictionary[150];
    printf("Enter the array strings of dictionary: \n");
    scanf("%s",dictionary);
    char words[150];
    printf("enter characters words that has to be get checked : \n");
    scanf("%s",words);
    int i,j;
    for(i=0;i<strlen(dictionary);i++)
    {
        for(j=0;j<strlen.(words);j++)
        {
            if (dictionary [i] == words [j])
            {
                printf("THE ELEMENT CAN BE SPLITED %s",words[j]);
            }
        }
    }
}
