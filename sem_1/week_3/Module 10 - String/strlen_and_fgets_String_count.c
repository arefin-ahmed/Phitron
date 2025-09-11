#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    
    // Using fgets to read a line of text including spaces
    fgets(s, sizeof(s), stdin);
    printf("%s\n", s);
    printf("Length: %d", strlen(s));

    return 0;
}