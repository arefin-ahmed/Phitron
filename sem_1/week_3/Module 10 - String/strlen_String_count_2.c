#include <stdio.h>
#include <string.h>
                    
int main()
{
    char s[100];
    scanf("%s", s); 
    printf("%s\n", s);
    printf("Length: %d", strlen(s));
}
                    // If use &s
                    /*The code might still compile, but it can cause
                    warnings, confusing behavior, or even a crash,
                    especially with newer compilers or on different
                    systems.*/