#include <stdio.h>
int main()
{
    int n;                            // using bullian
    scanf("%d", &n);

    int f = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
            f = 1;
        }
    }

    if (f == 0)
        printf("-1");
    return 0;
}