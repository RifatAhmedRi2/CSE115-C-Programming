#include<stdio.h>

int main()
{
    int i, n, count=0;
    printf("Enter Array Size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter Array Elements: ");

    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);

    for(i=0; i<n; i++)
    {
        if(arr[0]==arr[i])
            count++;
        if(arr[1]==arr[i])
            count++;
        else{
            printf("Different: %d", arr[i]);
            break;
        }
    }

    return 0;
}
