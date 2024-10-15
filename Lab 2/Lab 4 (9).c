#include<stdio.h>
#include<math.h>

int main()
{
    float b, h, area;
    printf("Enter the Base of the Triangle = ");
    scanf("%f", &b);
    printf("Enter the Height of the Triangle = ");
    scanf("%f", &h);
    area = (b*h)/2;
    printf("The Area of the triangle is = %.2f\n", area);
    return 0;
}
