#include<stdio.h>
#include<math.h>

int main()
{
    int i=1,n;
    printf("Enter the Number you wanna Print upto: ");
    scanf("%d",&n);

    while(i<=n)
    {
        printf("[%d]", i);
        i++;
    }
    return 0;
}
