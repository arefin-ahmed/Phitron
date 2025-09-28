#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    char arr[1000001];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", &arr[i]);
    }
    
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%s ", &arr[i]);
    }

    return 0 ;
}