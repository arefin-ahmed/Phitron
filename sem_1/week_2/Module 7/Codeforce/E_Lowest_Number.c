#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    int mn = ar[0];
    int index = 0;

    for (int i = 1; i < n; i++)
    {
        if (mn > ar[i])
        {
            mn = ar[i];
            index = i;
        }
    }

    printf("%d %d", mn, index + 1);

    return 0;
}