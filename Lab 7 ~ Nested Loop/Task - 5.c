#include<stdio.h>
#include<math.h>

int main()
{
    int i,j,n=100;
    printf("First 100 Prime Numbers are: ");

    for(j=2; n>0; j++)
    {
        for(i=2; i<j; i++)
        {
            if(j%i==0)
                break;
        }
        if(i==j)
        {
            printf("%d ", j);
            n--;
        }
    }
    return 0;
}

