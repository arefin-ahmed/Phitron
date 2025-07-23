#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    fgets(s, sizeof(s),stdin);
    scanf("%s", s);

    int count = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        count++;
    }
    printf("%s\n", s);
    printf("Length: %d", count);

    return 0 ;
}