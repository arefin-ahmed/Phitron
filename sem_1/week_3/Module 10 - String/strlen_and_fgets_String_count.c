#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    fgets(s, sizeof(s), stdin);
    // Using fgets to read a line of text including spaces

    int sz = strlen(s);

    printf("%s\n", s);
    printf("Length: %d", sz);

    return 0;
}