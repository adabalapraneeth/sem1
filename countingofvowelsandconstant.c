#include <stdio.h>
#include <ctype.h>

int main() {
    char s[1000];
    int i, v = 0, c = 0;

    fgets(s, 1000, stdin);

    for (i = 0; s[i]; i++) {
        if (isalpha(s[i])) {
            char ch = tolower(s[i]);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                v++;
            else
                c++;
        }
    }
    printf("Vowels=%d Consonants=%d", v, c);
}

