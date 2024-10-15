#include<stdio.h>
#include<math.h>

int main()
{
    int num, fact;
    fact=1;
    printf("Enter the Number to Calculate Factorial: ");
    scanf("%d",&num);

    while(num>=1)
    {
        fact=fact*num;
        num--;
    }
    printf("The Factorial of the Number is: %d\n",fact);
    return 0;
}
