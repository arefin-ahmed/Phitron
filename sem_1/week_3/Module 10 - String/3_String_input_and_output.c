#include <stdio.h>
int main()
{
    char a[10];

    scanf("%s", &a);
    printf("%s\n", a);

    printf("%d", a[5]);   
    //eikhane index 4 a HELLO word ta sesh tai 6 no index null means 0

    return 0;
}