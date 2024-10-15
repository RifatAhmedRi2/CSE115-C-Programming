#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    printf("Enter the Number: ");
    scanf("%d", &num);

    switch(num%2)
    {
        case 1:
            printf("It's an Odd Number\n", num);
            break;
        case 0:
            printf("It's an Even Number\n", num);
            break;
        default:
            printf("Invalid Input\n");
    }
    return 0;
}
