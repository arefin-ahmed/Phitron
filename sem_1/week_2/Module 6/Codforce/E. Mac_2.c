#include <stdio.h>
#include <limits.h>
int main()
{
    int n, v;
    int max = INT_MIN;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &v);
        if (v > max)
        {
            max = v;
        }
    }

    printf("%d", max);

    return 0;
}