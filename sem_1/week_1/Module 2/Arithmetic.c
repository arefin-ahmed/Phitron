#include<stdio.h>
int main ()
{
int a = 15;
float b = 2;
int sum = a+b;
int sub=a-b; 
int mul=a*b;
float div=a/b;
    printf("Sum = %d\n",sum);
    printf("Sub = %d\n",sub);
    printf("Multiplication = %d\n",mul);
    printf("Division = %.2f",div);
    
    return 0;
}