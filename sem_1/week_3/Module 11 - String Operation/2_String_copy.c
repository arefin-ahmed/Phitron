#include <stdio.h>
#include <string.h>
int main()
{
    char s1[21], s2[21];
    scanf("%s %s", s1, s2);

    // Copying s2 into s1
    strcpy(s1, s2);
    printf("%s", s1);

    return 0;
}