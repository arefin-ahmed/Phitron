#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b); // user input niye ei code solve kibhave korbo?

    int tmp = a;
    a = b;
    b = tmp;

    printf("a = %d\nb = %d", a, b);
    return 0;
}