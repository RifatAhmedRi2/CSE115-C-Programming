#include<stdio.h>
#include<math.h>

int main()
{
    float s,area;
    printf("Enter a side of the Equilateral Triangle = ");
    scanf("%f", &s);
    area = sqrt(3)/4*s*s;
    printf("The Area of the Equilateral Triangle is = %.2f\n", area);
    return 0;
}
