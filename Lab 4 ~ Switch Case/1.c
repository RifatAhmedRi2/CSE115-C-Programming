#include <stdio.h>
#include <math.h>

int main()
{
    int num1,num2;
    char sign;
    printf("Enter the Operator: ");
    scanf("%c", &sign);
    printf("Enter the 1st Value: ");
    scanf("%d", &num1);
    printf("Enter the 2nd Value: ");
    scanf("%d", &num2);

    switch(sign)
    {
        case '+':
            printf("The Result is %d",num1+num2);
            break;
        case '-':
            printf("The Result is %d",num1-num2);
            break;
        case '*':
            printf("The Result is %d",num1*num2);
            break;
        case '/':
            printf("The Result is %d",num1/num2);
            break;
        default:
            printf("Wrong Operator");
    }
    return 0;
}
