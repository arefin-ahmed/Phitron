#include <stdio.h>
#include <string.h>
int main()
{
    char s1[101], s2[101];
    scanf("%s %s", s1, s2);

    strcat(s1, s2);         // Concatenate s2 into s1
    printf("%s", s1);

    return 0;
}