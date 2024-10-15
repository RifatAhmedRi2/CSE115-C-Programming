#include<stdio.h>

int main()
{
    int i,j,r,c;

    printf("Enter the Number of Rows: ");
    scanf("%d", &r);
    printf("Enter the Number of Rows: ");
    scanf("%d", &c);

    int arr[r][c];
    printf("\nEnter the 1st Matrix Elements: \n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
            scanf("%d", &arr[i][j]);
    }

    printf("\nThe Given Matrix is: \n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
            printf("%d", arr[i][j]);
        printf("\n");
    }

    int sum=0;
    for(i=0; i<r; i++)
        sum=sum+arr[i][i];

    printf("\nSum of Cross Diagonal: %d\n", sum);

    return 0;
}
