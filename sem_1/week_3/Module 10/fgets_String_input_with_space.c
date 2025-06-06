#include <stdio.h>
int main()          // When output not come add header file  #include <string.h> 
{
    char s[50];
    fgets(s, 13, stdin);
    printf("%s", s);

    return 0;
}