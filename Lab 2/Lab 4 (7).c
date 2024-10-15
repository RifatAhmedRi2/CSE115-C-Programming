#include<stdio.h>
#include<math.h>

int main()
{
    float num,root;
    printf("Enter the Number to calculate its Square Root = ");
    scanf("%f", &num);
    root = sqrt(num);
    printf("The Square Root of the given Number is = %.2f\n", root);
    return 0;
}
