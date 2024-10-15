#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c;
    printf("Enter the First Arm: ");
    scanf("%d", &a);
    printf("Enter the Second Arm: ");
    scanf("%d", &b);
    printf("Enter the Third Arm: ");
    scanf("%d", &c);

    if (a==b && b==c)
        printf("The Triangle is Equilateral");
    else if ((a==b && a+b>c)||(a==c && a+c>b)||(b==c && b+c>a))
        printf("The Triangle is Isosceles");
    else if ((a+b>c)||(b+c>a)||(c+a>b))
        printf("The Triangle is Scalene");
    else
        printf("It's not a Triangle");
    return 0;
}


