#include<stdio.h>

int main()
{
    int i, j, arr[3][3];

    printf("Enter the Array Values: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            scanf("%d", &arr[i][j]);
    }

    printf("The given array is: \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            printf("%d", arr[i][j]);
        printf("\n");
    }

    int n, flag=0;
    printf("Enter the Number you wanna Search: \n");
    scanf("%d", &n);

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(arr[i][j]==n)
                flag=1;
        }
    }
    if(flag==1)
        printf("Found");
    else
        printf("Not Found");

    return 0;
}
