#include <stdio.h>
int main()
{
    char s[100];
    scanf("%s", s);

    int count = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        count++;
    }
    printf("%s\n", s);
    printf("Length: %d", count);

    return 0;
}