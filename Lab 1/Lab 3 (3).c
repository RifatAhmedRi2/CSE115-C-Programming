#include<stdio.h>
#include<math.h>
int main()
{
    int tf,ti,sf,si,dif1,dif2;
    printf("Enter the Taller person's height in Feet: ");
    scanf("%d", &tf);
    printf("Enter the Taller person's height in Inches: ");
    scanf("%d", &ti);
    printf("Enter the Smaller person's height in Feet: ");
    scanf("%d", &sf);
    printf("Enter the Smaller Person's height in Inches: ");
    scanf("%d", &si);
    dif1 = tf-sf;
    dif2 = ti-si;
    printf("Difference of height in Feet: %d\n", dif1);
    printf("Difference of height in Inches: %d\n", dif2);
    return 0;
}
