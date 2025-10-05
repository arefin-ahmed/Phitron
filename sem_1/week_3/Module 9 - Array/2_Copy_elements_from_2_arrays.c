#include <stdio.h>

int main()
{
    int m, n;

    scanf("%d", &n); 
    int arr[n]; 

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); 
    }

    scanf("%d", &m);
    int brr[m]; 

    for (int i = 0; i < m; i++)
    {
        scanf("%d", &brr[i]); 
    }

    // Declare combined array after m and n are combined
    int crr[m + n]; 

    // Copy elements of arr into crr
    for (int i = 0; i < n; i++)
    {
        crr[i] = arr[i];
    }

    // Copy elements of brr into crr
    for (int i = 0; i < m; i++)
    {
        crr[i + n] = brr[i];
    }

    // Print merged array
    for (int i = 0; i < m + n; i++)
    {
        printf("%d ", crr[i]);
    }

    return 0;
}


