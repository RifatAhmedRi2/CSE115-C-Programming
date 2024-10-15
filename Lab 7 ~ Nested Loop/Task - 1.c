#include<stdio.h>
#include<math.h>

int main()
{
    int i,j,n,sum=0;
    printf("Enter a Number: ");
    scanf("%d", &n);

    while(n!=0)
    {
        sum=sum+n%10;
        n=n/10;
    }

    printf("Summation of the Digits: %d\n", sum);
    return 0;
}
