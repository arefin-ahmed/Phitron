#include <stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    
    if(tk>=5000)
    {
        printf("Cox's Bazar Jabo\n");

        if(tk>=10000)
        {
            printf("Saint Martin Jabo\n");
        }
        else
        {
            printf("Ferot Chole Ashbo\n");
        }
    }

    else
    {
        printf("Jabo Na\n");
    }
    return 0;
}
