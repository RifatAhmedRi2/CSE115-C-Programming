#include<stdio.h>
#include<math.h>

int main()
{
    int i,n;
    printf("Enter the Number you wanna Print upto: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        printf("[%d]", i);
    }
    return 0;
}
