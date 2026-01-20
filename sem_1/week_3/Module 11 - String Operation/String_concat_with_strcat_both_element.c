#include <stdio.h>
#include <string.h>
int main()
{
    char s1[101], s2[101];
    scanf("%s %s", s1, s2);

    strcat(s1, s2);         // Concatenate s2 into s1 ; String_concat_with_strcat_both_element
    printf("%s %s", s1, s2);

    return 0;
}