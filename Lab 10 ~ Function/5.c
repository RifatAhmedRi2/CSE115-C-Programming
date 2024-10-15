#include<stdio.h>
#include<math.h>

int power (int n);

int main()
{
    int x, result;
    printf("Enter power n: ");
    scanf("%d", &x);
    result=power(x);
    printf("Result: %d", result);
    return 0;
}

int power(int n)
{
    int res;
    res=pow(2,n);
    return res;
}
