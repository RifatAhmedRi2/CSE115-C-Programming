#include<stdio.h>

int DigiRoot (int n);

int main()
{
    int a,result;
    printf("Enter the Number: ");
    scanf("%d", &a);
    result=DigiRoot(a);
    printf("Digital Root: %d\n", result);
    return 0;
}

int DigiRoot (int n)
{
    int unit1, sum1=0, unit2, sum2=0, unit3, sum3=0;

    while(n!=0)
    {
        unit1=n%10;
        n=n/10;
        sum1=sum1+unit1;
    }

    if(sum1<=9)
        return sum1;
    else
    {
        while(sum1!=0)
        {
            unit2=sum1%10;
            sum1=sum1/10;
            sum2=sum2+unit2;
        }
        if(sum2<=9)
            return sum2;
        else
        {
            while(sum2!=0)
            {
                unit3=sum2%10;
                sum2=sum2/10;
                sum3=sum3+unit3;
            }
            return sum3;
        }
    }
}
