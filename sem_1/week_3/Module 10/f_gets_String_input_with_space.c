#include <stdio.h>
#include <string.h>
int main()          // When output not come add header file  #include <string.h> 
{
    char s[50];
    fgets(s, 13, stdin);      // fgets(s, size, stdin);
    printf("%s", s);

    return 0;
}