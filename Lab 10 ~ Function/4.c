#include <stdio.h>

int summation(int n);

int main()
{
    int x, result;
    printf("Enter a Number: ");
    scanf("%d", &x);
    result=summation(x);
    printf("Sum of the Digits: %d", result);
    return 0;
}

int summation(int n)
{
    int sum=0, remainder;
    while(n!=0)
    {
        remainder=n%10;
        sum=sum+remainder;
        n=n/10;
    }
    return sum;
}
