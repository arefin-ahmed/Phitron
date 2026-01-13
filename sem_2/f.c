#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n + 1]; // int ar[n]; eita likhlam na keno

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    int pos, val;
    scanf("%d %d", &pos, &val);

    for (int i = n; i >= pos + 1; i--)
    {
        ar[i] = ar[i - 1];
    }
    ar[pos] = val;

    for (int i = 0; i <= n; i++)
    {
        printf("%d ", ar[i]);
    }

    return 0;
}