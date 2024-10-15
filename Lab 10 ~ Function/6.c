#include<stdio.h>
#include<math.h>

int factorial(int x);

int main()
{
    int n, r, nCr;
    printf("Enter the Value of n: ");
    scanf("%d", &n);
    printf("Enter the Value of r: ");
    scanf("%d", &r);

    nCr = factorial(n) / (factorial(r)*factorial(n-r));
    printf("nCr = %d", nCr);
    return 0;
}

int factorial(int x)
{
    int i, fact=1;
    for(i=1; i<=x; i++)
        fact=fact*i;
    return fact;
}
