int uppercase(char str[])
{
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>=97 && str[i]<=122)
            str[i]=str[i]-32;
    }
    return str;
}
int main()
{
    char name[1000];
    scanf("%s",name);
    printf("%s",uppercase(name));
}
