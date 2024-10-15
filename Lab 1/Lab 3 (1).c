#include<stdio.h>
int main()
{
    int c,f;
    printf("Enter the Fahrenheit Value: ");
    scanf("%d",&f);
    c = 5*(f-32)/9;
    printf("The Celcius Values is: %d", c);
    return 0;
}
