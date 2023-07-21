#include <stdio.h>
#include <string.h>

void remove_first_occurrence(char *str, const char *to_remove)
{
    int len = strlen(to_remove);
    char *ptr = strstr(str, to_remove);
    if (ptr != NULL) {
        memmove(ptr, ptr + len, strlen(ptr + len) + 1);
    }
}

int main() {
    char str[100] = "one on one ";
    const char *to_remove = "one";
    remove_first_occurrence(str, to_remove);
    printf("%s\n", str);
    return 0;
}
