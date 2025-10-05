#include <stdio.h>
int main()
{
    char s[100001];
    scanf("%s", s);

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ',')
        {
            s[i] = ' '; // Replace comma with space
        }

        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 32; // Convert lowercase to uppercase
        }

        else
        {
            s[i] = s[i] + 32; // Convert uppercase to lowercase
        }
    }

    printf("%s", s);

    return 0;
}