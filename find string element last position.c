#include <stdio.h>
#include <string.h>

int main() {
    char str[1000], ch;
    int i, len, pos = -1;

    printf("Enter a string: ");
    fgets(str, 1000, stdin);
    len = strlen(str);

    printf("Search character: ");
    scanf("%c", &ch);

    for (i = 0; i < len; i++) {
        if (str[i] == ch) {
            pos = i;
        }
    }

    if (pos == -1) {
        printf("Search character not found in string.");
    } else {
        printf("Position: %d", pos);
    }

    return 0;
}

