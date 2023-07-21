#include <stdio.h>
#include <string.h>

int Str(char* simbol)
{
    int n = strlen(simbol);
    int open_bracket = 0, star = 0;

    for (int i = 0; i < n; i++)
    {
        if (simbol[i] == '(')
        {
            open_bracket++;
        }
        else if (simbol[i] == '*')
        {
            star++;
        }
        else
        {
            if (open_bracket > 0)
            {
                open_bracket--;
            }
            else if (star > 0)
            {
                star--;
            }
            else
            {
                return 0;
            }
        }
    }

    if (open_bracket > star)
    {
        return 0;
    }

    return 1;
}

int main()
{
    int t;
    scanf("%d", &t);

    do
    {
        char s[100];
        scanf("%s",&s);
        int ans = Str(s);
        if (ans)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }while(t--);

    return 0;
}
