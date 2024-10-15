#include <stdio.h>
int main()
{
    float a,b,c,sum,avg;
    printf("Enter subject 1 mark: ");
    scanf("%f", &a);
    printf("Enter subject 2 mark: ");
    scanf("%f", &b);
    printf("Enter subject 3 mark: ");
    scanf("%f", &c);
    sum=a+b+c;
    printf("The total is %.2f+%.2f+%.2f = %.2f\n", a,b,c,sum);
    avg=sum/3;
    printf("Average is %.2f\n", avg);
    return 0;
}
