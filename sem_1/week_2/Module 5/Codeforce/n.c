#include <stdio.h>
int main()
{
    char s;
    scanf("%c", &s);

    if (s >= 'a' && s <= 'z')
    {
        s = s - 32;
        printf("%c", s);
    }

    else
    {
        s = s + 32;
        printf("%c", s);
    }
    return 0;
}
// if (65 <= s >= 90)
// {
//     s = s - 32;
//     printf("%c", s);
// }

// if (97 <= s >= 122)
// {
//     s = s + 32;
//     printf("%c", s);
// }
// return 0;
// }