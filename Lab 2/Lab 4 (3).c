#include<stdio.h>
#include<math.h>
#define pie 3.1416

int main()
{
    float r,d,c,area;
    printf("Enter the Radius of the Circle = ");
    scanf("%f", &r);
    d = 2*r;
    printf("The Diameter of the Circle is = %.2f\n", d);
    c = pie*d;
    printf("The Circumference of the Circle is = %.2f\n", c);
    area = pie*r*r;
    printf("The Area of the Circle is = %.2f\n", area);
    return 0;
}
