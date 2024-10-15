#include<stdio.h>
#include<math.h>

int main()
{
    float l,b,area;
    printf("Enter the Length of the Rectangle = ");
    scanf("%f", &l);
    printf("Enter the Breadth of the Rectangle = ");
    scanf("%f", &b);
    area = l*b;
    printf("The Area of the Rectangle is = %.2f\n", area);
    return 0;
}
