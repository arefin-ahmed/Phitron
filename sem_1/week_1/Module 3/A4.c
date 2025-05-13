#include <stdio.h>
int main()
{
    int N, s;
    scanf("%d",&N);
    for (s = 1; s <= N; s++)
    {
        if(s%3==0&&s%7==0)
        {
        printf("%d\n",s);
        }
        }
    return 0;
}











