#include<stdio.h>
#include<math.h>

int main()
{
    int i,num,sum=0;
    printf("Enter the Number: ");
    scanf("%d",&num);

    for(i=1; i<=num; i++)
    {
        if (num%i==0 && i%2==1)
            sum=sum+i;
    }
    printf("Sum of the Odd Factors is: %d\n", sum);
    return 0;
}
