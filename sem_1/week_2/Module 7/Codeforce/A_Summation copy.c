// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);

//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     int sum = 0;

//     for (int i = 0; i < n; i++)
//     {
//         sum += arr[i];
//     }

//     sum = abs(sum);

//     printf("%lld\n", sum);

//     return 0;
// }



#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
 
    int arr[n];
    int sum = 0;
 
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
 
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
 
    if (sum < 0)
        sum = (-1)*sum;
 
    printf("%d", sum);
 
    return 0;
}