#include <stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);

    if(tk>=100)
    {
        printf("Ami Burger Khabo\n");
    }
    else if(tk>=50)
    {
        printf("Ami Fuchka Khabo\n");
    }
    else if(tk>=20)
    {
        printf("Ami lays Khabo\n");
    }
    else
    {
        printf("Ami Kichu Khabo Na\n");
    }

    return 0;
}