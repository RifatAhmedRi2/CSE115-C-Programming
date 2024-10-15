#include<stdio.h>
#include<math.h>

int main()
{
    float l,b,peri;
    printf("Enter the Length of the Rectangle = ");
    scanf("%f", &l);
    printf("Enter the Breadth of the Rectangle = ");
    scanf("%f", &b);
    peri = 2*(l+b);
    printf("The Perimeter of the Rectangle is = %.2f\n", peri);
    return 0;
}
