#include<stdio.h>
#include<math.h>

int main()
{
    int i=2,n=100,count,value;
    printf("First 100 Prime Numbers are:  ");

    for(count=1; count<=n; i++)
    {
        for(value=2; value<i; value++)
        {
            if(i%value==0)
                break;
        }
        if(value==i)
        {
            printf("%d ", i);
            count++;
        }
    }
    return 0;
}

