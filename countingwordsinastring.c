#include <stdio.h>
#include <ctype.h>

int main() {
    char s[1000];
    fgets(s, 1000, stdin);

    int count = 0, i;

    for (i = 0; s[i]; i++)
        if ((i == 0 && s[i] != ' ') ||
            (s[i] != ' ' && s[i - 1] == ' '))
            count++;

    printf("Words = %d", count);
}

