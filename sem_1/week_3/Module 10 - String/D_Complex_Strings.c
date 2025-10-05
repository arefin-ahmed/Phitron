#include <stdio.h>
#include <string.h>
int main()
{
    char s1[11], s2[11];
    scanf("%s %s", s1, s2);

    // Length of two strings
    int len1 = strlen(s1), len2 = strlen(s2);
    printf("%d %d\n", len1, len2);

    // Concatenation of two strings
    char ch[25];
    strcpy(ch, s1);
    strcat(ch, s2);
    printf("%s\n", ch);

    // Swapping two strings
    char temp = s1[0];
    s1[0] = s2[0];
    s2[0] = temp;
    printf("%s %s", s1, s2);

    return 0;
}