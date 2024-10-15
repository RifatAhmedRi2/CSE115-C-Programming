#include<stdio.h>

int main()
{
    int i,j,r,c;

    printf("Enter the Number of Rows: ");
    scanf("%d", &r);
    printf("Enter the Number of Rows: ");
    scanf("%d", &c);
    int arr[r][c];

    printf("Enter Matrix Elements: \n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
            scanf("%d", &arr[i][j]);
    }

    printf("The given array is: \n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
            printf("%d", arr[i][j]);
        printf("\n");
    }

    int n, sum=0;
    printf("Enter the Column to find its Sum: \n");
    scanf("%d", &n);

    printf("The Elements of Column %d: ", n);
    for(i=0; i<r; i++)
    {
        for(j=n-1; j<n; j++)
        {
            printf("%d ", arr[i][j]);
            sum=sum+arr[i][j];
        }
    }

    printf("\nSum of this Column: %d", sum);

    return 0;
}
