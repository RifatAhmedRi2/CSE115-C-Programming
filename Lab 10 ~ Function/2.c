#include <stdio.h>

int sum(int x, int y);

int main()
{
    int result,a,b,c,d,sum1,sum2;
    printf("Enter First Integer: ");
    scanf("%d", &a);
    printf("Enter Second Integer: ");
    scanf("%d", &b);
    printf("Enter Third Integer: ");
    scanf("%d", &c);
    printf("Enter Fourth Integer: ");
    scanf("%d", &d);

    sum1 = sum(a,b);
    sum2 = sum(c,d);
    result = sum(sum1,sum2);
    printf("Summation: %d\n", result);
    return 0;
}

int sum(int x, int y)
{
    int sum;
    sum=x+y;
    return sum;
}
