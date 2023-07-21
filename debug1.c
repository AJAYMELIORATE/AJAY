 #include<stdio.h>

int sum=0;

int fun(int a,int b)
{
    if(b==0)
    {
        return 0;
    }
    else if(b%2==0)
    {
        sum+=a;
        return fun(a+a,b/2+1);
    }
    else if(b%2==1)
    {
        sum+=b;
        return  fun(a+a,b/2);
    }
    return fun(a+a,b/2)+a;
}
int main()
{
    int a=10,b=10;
    int c=fun(a,b);
    printf("%d",c);

}
