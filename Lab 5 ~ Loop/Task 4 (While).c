#include<stdio.h>
#include<math.h>

int main()
{
    int i=1,n;
    printf("Enter the Number: ");
    scanf("%d",&n);
    printf("The Numbers in between 1 to %d that are Divisible by 13:\n", n);

    while(i<=n)
    {
        if(i%13==0)
            printf("%d\n", i);
        i++;
    }
    return 0;
}
