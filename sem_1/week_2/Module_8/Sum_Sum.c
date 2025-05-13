#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int long long p_sum = 0, n_sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            p_sum += a[i];
        }
        else
        {
            n_sum += a[i];
        }
    }

    printf("%lld %lld", p_sum, n_sum);

    return 0;
}
