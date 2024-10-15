#include <stdio.h>

int maximum(int array[], int n);

int main()
{
    int i,n;

    printf("Enter Array Size: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter Array Elements: \n");
    for (i=0; i<n; i++)
        scanf("%d", &a[i]);

    int max=maximum(a,n);
    printf("Maximum Element is: %d\n", max);
    return 0;
}

int maximum(int array[], int n)
{
    int i, max=0;

    for (i=1; i<n; i++)
    {
        if (array[i]>array[max])
            max = i;
    }

    return array[max];
}
