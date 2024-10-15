#include<stdio.h>
#include<math.h>

int main()
{
    int i,num,fact;
    i=1, fact=1;
    printf("Enter the Number to Calculate Factorial: ");
    scanf("%d",&num);

    while(i<=num)
    {
        fact=fact*i;
        i++;
    }
    printf("The Factorial of the Number is: %d\n",fact);
    return 0;
}
