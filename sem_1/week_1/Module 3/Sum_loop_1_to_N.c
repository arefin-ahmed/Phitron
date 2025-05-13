#include <stdio.h>
int main()
{
    int i, n;
    int sum = 0;     //  print Summation 1 to...n num

    scanf("%d", &n);
    printf("Enter the Value of Summation 1 to...%d\n\n",n);
    for (i = 1; i <= n; i++)
    {
        sum = sum +i;
    }

    printf("The Summation of 1 to %d is : %d\n", n, sum);

    return 0;
}