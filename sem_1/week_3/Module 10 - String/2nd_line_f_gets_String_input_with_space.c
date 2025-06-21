#include <stdio.h>
#include <string.h>
int main() // When output not come add header file  #include <string.h>
{
    char s[23];
    fgets(s, 23, stdin); // f_gets(s, size, stdin);

    printf("%s", s);    // f_gets new line input ney

    return 0;
}