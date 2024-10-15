#include<stdio.h>
#include<math.h>

int main()
{
    int row,col,n;
    printf("Enter N: ");
    scanf("%d", &n);

    for(row=1; row<=n; row++)
    {
        for(col=row; col<n; col++)
        {
            printf(" ");
        }
        for(col=1; col<=(2*row-1); col++)
        {
            printf("%d",col);
        }
        printf("\n");
    }

    for(row=1; row<=n; row++)
    {
        for(col=1; col<row; col++)
        {
            printf(" ");
        }
        for(col=1; col<=(n*2-(2*row-1)); col++)
        {
            printf("%d",col);
        }
        printf("\n");
    }
    return 0;
}
