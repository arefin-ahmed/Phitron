#include <stdio.h>
int main()
{
    int i;

    for (i = 1; i <= 10; i++)         // print 1 to 4 when it"s 5 it stop 
    {
        if (i == 5)
        {
            break;
        }
        printf("%d\n",i);
    }
    return 0;
}