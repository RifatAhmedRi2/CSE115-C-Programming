#include<stdio.h>
#include<math.h>

int main()
{
    int i,j,range,sum,count=0;
    printf("Enter the Limit: ");
    scanf("%d", &range);

    for(j=1; j<=range; j++)
    {
        sum=0;
        for (i=1; i<j; i++)
        {
            if(j%i==0)
                sum=sum+i;
        }
        if (sum==j)
            count++;
    }

    printf("There is %d Perfect Numbers\n", count);
    return 0;
}
