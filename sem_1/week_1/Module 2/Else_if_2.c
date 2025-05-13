#include <stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);   // protek ta alada ladder hishabe count hobe
    if(tk>=5000)
    {
        printf("Cox's Bazar Jabo\n");
    }
    if(tk>=7000)
    {
        printf("Shajek Jabo\n");
    }
    if(tk>=10000)
    {
        printf("Sundarban Jabo\n");
    }
    if(tk<5000)
    {
        printf("Jabo Na\n");
    }
    return 0;
}