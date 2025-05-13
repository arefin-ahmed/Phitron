#include <stdio.h>
int main()
{
    int i;

    for (i = 1; i <= 10; i++)         // print 1 to 10 except 5
    {
        if (i == 5)
        {
            continue;
        }
        printf("%d\n",i);
    }
    return 0;
}