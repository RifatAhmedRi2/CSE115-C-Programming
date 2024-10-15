#include<stdio.h>
#include<math.h>

int main()
{
    int i,j,n;
    printf("Enter N: ");
    scanf("%d", &n);

    for (i=n; i>=1; i--,n--)
    {
        for (j=n; j>=1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
