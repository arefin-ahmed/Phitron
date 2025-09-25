#include <stdio.h>
int main()
{
    int n;
    int arr[101];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%s", &arr[i]);
    }

    for (int i = n - 1; i >= 0; i--)
    {
        printf("%s ", &arr[i]);
    }

    return 0;
}