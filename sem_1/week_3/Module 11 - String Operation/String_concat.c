#include <stdio.h>
#include <string.h>
int main()

{
    char s1[101], s2[101];
    scanf("%s %s", s1, s2);

    int length1 = strlen(s1);
    int length2 = strlen(s2);

    for (int i = 0; i <= length2; i++)
    {
        s1[i + length1] = s2[i];  // // concat s2 into s1,  2nd element not show
    }

    printf("\n%s", s1);
    return 0;
}