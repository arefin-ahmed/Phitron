#include <stdio.h>
int main()
{
    int m, n;
    scanf("%d", &n);

    int arr[n], crr[m + n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        crr[i] = arr[i];
    }

    scanf("%d", &m);

    int brr[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &brr[i]);
        crr[i + n] = brr[i];
    }

    for (int i = 0; i < m + n; i++)
    {
        printf("%d ", crr[i]);
    }

    return 0;
}