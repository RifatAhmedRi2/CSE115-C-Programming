#include<stdio.h>
#include<math.h>

int main()
{
    int i,base,pow;
    float ans=1;
    printf("Enter X (Base): ");
    scanf("%d", &base);
    printf("Enter N (Power): ");
    scanf("%d", &pow);

    if (pow>=0 && base!=0)
    {
        for(i=1; i<=pow; i++)
        {
            ans=ans*base;
        }
        printf("Result: %.2f", ans);
    }
    else if (pow<0 && base!=0)
    {
        for(i=-1; i>=pow; i--)
        {
            ans=ans*base;
        }
        printf("Result: %.2f", 1/ans);
    }
    else if (pow==0 && base==0)
        printf("Result: Undefined");
    else
        printf("Result: 0");

    return 0;
}

