#include <stdio.h>
int main()
{
    int A, B, C;
    scanf("%d%d%d", &A, &B, &C);

    // find small number

    if (A <= B && A <= C)
    {
        printf("%d", A);
    }

    else if (B <= A && B <= C)
    {
        printf("%d", B);
    }

    else if (C <= A && C <= B)
    {
        printf("%d", C);
    }

    // find big number

    if (A >= B && A >= C)
    {
        printf(" %d", A);
    }

    else if (B >= A && B >= C)
    {
        printf(" %d", B);
    }

    else if (C >= B && C >= A)
    {
        printf(" %d", C);
    }

    return 0;
}

// #include <stdio.h>

// int main() {
//     int a, b, c;
//          scanf("%d%d%d", &a, &b, &c);

//     if (a >= b && a >= c) {
//         printf("Largest = %d", a);
//     } else if (b >= a && b >= c) {
//         printf("Largest = %d", b);
//     } else {
//         printf("Largest = %d", c);
//     }

//     return 0;
// }
