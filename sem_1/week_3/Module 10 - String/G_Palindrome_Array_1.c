#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);    

    char s[n + 1];
    scanf("%s", s);     

    int isPalindrome = 1;

    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - 1 - i])
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

// Use char s[] + %s → for string palindrome.

// Use int arr[] + %d → for integer array palindrome.