#include <stdio.h>

int factorial(int n);

int main()
{
    int x,result;
    printf("Enter the Number: ");
    scanf("%d", &x);
    result=factorial(x);
    printf("The Factorial of %d is: %d",x,result);
    return 0;
}

int factorial(int n)
{
    int i, fact=1;
    for(i=1; i<=n; i++)
        fact=fact*i;
    return fact;
}
