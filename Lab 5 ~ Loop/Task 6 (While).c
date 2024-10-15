#include<stdio.h>
#include<math.h>

int main()
{
    int i,n,sum,input;
    sum=0;
    i=0;
    printf("How many Numbers do you wanna enter: ");
    scanf("%d", &n);

    while(i<n)
    {
        printf("Enter a number: ");
        scanf("%d", &input);
        sum = sum+input;
        i++;
    }
    printf("Total Sum of the Inputs is: %d\n", sum);
    return 0;
}
