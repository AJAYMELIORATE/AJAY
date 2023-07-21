#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

bool isScrambleUtil(char* s1, char* s2, int len)
{
    int count[26];
    for(int i=0;i<len;i++) count[s1[i]-'a']++, count[s2[i]-'a']--;

    for(int i=0;i<26;i++) if(count[i]!=0) return false;

    for(int i=1;i<len;i++)
        if((isScrambleUtil(s1,s2,i) && isScrambleUtil(s1+i,s2+i,len-i)) ||
           (isScrambleUtil(s1,s2+len-i,i) && isScrambleUtil(s1+i,s2,len-i)))
            return true;

    return false;
}

bool isScramble(char* s1, char* s2)
{
    int len = strlen(s1);
    if(len != strlen(s2)) return false;
    return isScrambleUtil(s1,s2,len);
}

int main()
{
    char s1[31], s2[31];
    printf("Enter the first string: ");
    scanf("%s", s1);
    printf("Enter the second string: ");
    scanf("%s", s2);

    if(isScramble(s1,s2))
        printf("True");
    else
        printf("False.");

    return 0;
}
