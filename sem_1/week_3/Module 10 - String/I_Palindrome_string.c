#include <stdio.h>
#include <string.h>

int main()
{
    char s[1001];
    scanf("%s", s);     

    int isPalindrome = 1;
    int length = strlen(s);

    for (int i = 0; i < length / 2; i++)
    {
        if (s[i] != s[length - 1 - i])
        {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("YES");
    else
        printf("NO");

    return 0;
}