#include <stdio.h>
int main()
{
    int N, s;
    scanf("%d",&N);
    for (s = 1; s <= N; s++)
    {
        if (s%5==0)
        {
            printf("%d Yes\n",s);
        }

        else
        {
            printf("%d No\n",s);
        }
    }
    return 0;
}
