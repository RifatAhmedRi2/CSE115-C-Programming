#include<stdio.h>

int nb_Count(int n, int d);

int main()
{
    int nn,dd,count;
    printf("Enter N: ");
    scanf("%d", &nn);
    printf("Enter D: ");
    scanf("%d", &dd);
    count=nb_Count(nn,dd);
    printf("\nTotal Count is: %d", count);
    return 0;
}

int nb_Count(int n, int d)
{
    int i;
    int a[n+1];
    printf("The Squares are: ");
    for(i=0; i<=n; i++)
    {
        a[i]=i*i;
        printf("%d ", a[i]);
    }

    int unit, sum=0, count=0;
    for(i=0; i<=n; i++)
    {
        while(a[i]!=0)
        {
            unit=a[i]%10;
            a[i]=a[i]/10;
            if(unit==d)
                count++;
        }
    }

    return count;
}
