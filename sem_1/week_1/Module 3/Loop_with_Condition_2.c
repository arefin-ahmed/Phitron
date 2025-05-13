#include <stdio.h>
int main()
{
    int i;          // print 1 to 10 even & odd num define

    for (i = 1; i <= 10; i++)
    {
        if(i%2==0)
        {
            printf("%d is odd\n",i);
        }
        else
        {
            printf("%d is even\n",i);
        }
    }

        return 0;
}
