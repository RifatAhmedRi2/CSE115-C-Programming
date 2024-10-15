#include<stdio.h>

int main()
{
    int i,j,r,c;

    printf("Enter the Number of Rows: ");
    scanf("%d", &r);
    printf("Enter the Number of Rows: ");
    scanf("%d", &c);

    int arr1[r][c];
    printf("\nEnter the 1st Matrix Elements: \n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
            scanf("%d", &arr1[i][j]);
    }

    printf("\nThe 1st Matrix is: \n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
            printf("%d", arr1[i][j]);
        printf("\n");
    }

    int arr2[r][c];
    printf("\nEnter the 2nd Matrix Elements: \n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
            scanf("%d", &arr2[i][j]);
    }

    printf("\nThe 2nd Matrix is: \n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
            printf("%d", arr2[i][j]);
        printf("\n");
    }

    int array_sum[r][c];

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            array_sum[i][j]=arr1[i][j]+arr2[i][j];
        }
        printf("\n");
    }

    printf("Sum of the Matrixes: \n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
            printf("%d", array_sum[i][j]);
        printf("\n");
    }

    return 0;
}
