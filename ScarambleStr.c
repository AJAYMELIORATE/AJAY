

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isScramble(char* s1, char* s2) {
    int n = strlen(s1);
    if (n != strlen(s2)) {
        return false;
    }
    if (n == 0) {
        return true; // empty strings are scrambled versions of each other
    }
    if (n == 1) {
        return (*s1 == *s2); // single-letter strings must match
    }
    // check if the two strings have the same characters
    int count[26] = {0}; // assuming only lowercase English letters
    for (int i = 0; i < n; i++) {
        count[s1[i] - 'a']++;
        count[s2[i] - 'a']--;
    }
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return false; // the strings have different character frequencies
        }
    }
    // try all possible splits and check if the two substrings are scrambled versions
    for (int i = 1; i < n; i++) {
        if ((isScramble(s1, s2+i) && isScramble(s1+i, s2)) ||
            (isScramble(s1, s2+n-i) && isScramble(s1+n-i, s2)) ) {
            return true;
        }
    }
    return false;
}

int main() {
    char s1[31], s2[31];
    printf("Enter two strings of the same length (max length 30): ");
    scanf("%s%s", s1, s2);
    if (isScramble(s1, s2)) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    return 0;
}
