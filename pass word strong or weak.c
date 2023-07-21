#include <stdio.h>
#include<stdlib.h>
#include<math.h>
#include <stdbool.h>
#include <string.h>

bool StrongPassword(char password[])
{
    int length = strlen(password);

    if (length < 8)
    {
        return false;
    }

    bool Uppercase = false;
    bool Lowercase = false;
    bool SpecialChar = false;
    bool Digit = false;


    for (int i = 0; i < length; i++)
    {
        char c = password[i];

        if (isupper(c))
        {
            Uppercase = true;
        }
        else if (islower(c))
        {
            Lowercase = true;
        }
        else if (ispunct(c))
        {
            SpecialChar = true;
        }
        else if (isdigit(c))
        {
            Digit = true;
        }
    }


    return Uppercase && Lowercase && SpecialChar && Digit;
}

int main() {
    char password[] = "Lakshmi@123";

    if (StrongPassword(password))
    {
        printf("The password is strong.\n");
    }
    else
    {
        printf("The password is weak.\n");
    }

    return 0;
}
