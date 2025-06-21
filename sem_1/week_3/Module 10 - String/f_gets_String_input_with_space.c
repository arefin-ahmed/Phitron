#include <stdio.h>
#include <string.h>
int main() // When output not come add header file  #include <string.h>
{
    char s[23];
    fgets(s, sizeof(s), stdin); // fgets(s, size, stdin);
    printf("%s", s);

    return 0;
}