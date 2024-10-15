#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c;
    printf("Enter the First Angle of the triangle = ");
    scanf("%d", &a);
    printf("Enter the Second Angle of the triangle = ");
    scanf("%d", &b);
    c = 180-(a+b);
    printf("The Third Angle of the triangle is = %d\n", c);
    return 0;
}
