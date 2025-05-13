#include <stdio.h>
int main()
{
    char a ;
    scanf("%c",&a);
    if(a!='z')
    {
        a=a+1;
        printf("%c",a);
    }

    else
    {
        printf("a");
    }

    return 0 ;
}