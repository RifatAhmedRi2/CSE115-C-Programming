#include<stdio.h>
#include<math.h>

int main()
{
    int i,n1,n2,count=0;
    printf("Enter Number 1: ");
    scanf("%d",&n1);
    printf("Enter Number 2: ");
    scanf("%d",&n2);

    for(i=n1; i<=n2; i++)
    {
        if(i%3==0 && i%5!=0)
            count++;
    }
    printf("%d Numbers", count);
    return 0;
}
