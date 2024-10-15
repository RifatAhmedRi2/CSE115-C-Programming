#include <stdio.h>
#include <math.h>

int main()
{
    int num1, num2;
    printf("Enter the First Number: ");
    scanf("%d", &num1);
    printf("Enter the Second Number: ");
    scanf("%d", &num2);

    switch(num1>num2)
    {
        case 1:
            printf("%d is the Maximum Number\n", num1);
            break;
        case 0:
            printf("%d is the Maximum Number\n", num2);
            break;
    }
    return 0;
}
