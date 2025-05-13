#include <stdio.h>
int main()
{
    int x = 10;                    // int declare & initialization
    int ar[5] = {1, 2, 3, 4, 5};  // array declare & initialization

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", ar[i]);
    }

    return 0;
}