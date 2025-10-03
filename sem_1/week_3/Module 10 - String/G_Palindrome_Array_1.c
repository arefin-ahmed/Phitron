#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    char arr[n + 1];

    for (int i = 0; i < n; i++)
    {
        scanf(" %c", &arr[i]);
    }

    int isPalindrome = 1;

    for (int i = 0; i <= n / 2; i++)
    {
        if (arr[i] != arr[n - i - 1])
        {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}