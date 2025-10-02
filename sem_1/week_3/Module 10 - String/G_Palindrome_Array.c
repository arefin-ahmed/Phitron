#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    char arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%s",arr[i]);
    }
    
        printf("%s",arr[i]);

    return 0 ;
}