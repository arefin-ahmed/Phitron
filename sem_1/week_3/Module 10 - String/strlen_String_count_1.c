#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    scanf("%s", s);

    int sz = strlen(s);

    printf("%s\n", s);
    printf("Length: %d", sz);

    return 0;
}