#include <stdio.h>
int main()
{
    int n, v;
    scanf("%d", &v);

    for (int i = 1; i <= v; i++)
    {
        scanf("%d", &n);

        if(n==0)
        {
            printf("0");
        }

        while (n != 0)
        {
            printf("%d ", n%10);
            n /= 10;
        }
        printf("\n");
    }

    return 0;
}