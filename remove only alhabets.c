#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000], new_str[1000];
    int i, j;

    printf("Enter a string: ");
    fgets(str, 1000, stdin);

    for (i = 0, j = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            new_str[j] = str[i];
            j++;
        }
    }
    new_str[j] = '\0';

    printf("String after removal: %s", new_str);

    return 0;
}
