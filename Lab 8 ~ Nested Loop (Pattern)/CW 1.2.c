#include<stdio.h>
#include<math.h>

int main()
{
    int row,col,n;
    printf("Enter N: ");
    scanf("%d", &n);

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
           printf("%d",row);
        }
        printf("\n");
    }
    return 0;
}
