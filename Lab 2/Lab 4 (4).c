#include<stdio.h>
#include<math.h>

int main()
{
    float cm,m,km;
    printf("Enter the Length in Centimeter = ");
    scanf("%f", &cm);
    m = cm/100;
    km = cm/(100*1000);
    printf("The Converted Length is %.2f Meter & %.2f Kilometer\n", m,km);
    return 0;
}
