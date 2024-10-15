#include<stdio.h>
#include<math.h>

int main()
{
    float num,expo,power;
    printf("Enter the Number = ");
    scanf("%f", &num);
    printf("Enter the Exponent = ");
    scanf("%f", &expo);
    power = pow(num,expo);
    printf("The Power is = %.2f^%.2f = %.2f\n", num,expo,power);
    return 0;
}
