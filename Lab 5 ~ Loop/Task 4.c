#include<stdio.h>
#include<math.h>

int main()
{
    int i,n;
    printf("Enter the Number: ");
    scanf("%d",&n);
    printf("The Numbers in between 1 to %d that are Divisible by 13:\n", n);

    for(i=1; i<=n; i++)
    {
        if(i%13==0)
        printf("%d\n", i);
    }
    return 0;
}
