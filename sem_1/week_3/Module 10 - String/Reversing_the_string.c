#include <stdio.h>
#include <string.h>
int main()
{
    char s[101];
    int length = strlen(s);

    scanf("%d", &length);
    //printf("%d", length);

    for (int i = length - 1; i >= 0; i--)
    {
        printf("%c", s[i]);   
    }

    return 0;
}