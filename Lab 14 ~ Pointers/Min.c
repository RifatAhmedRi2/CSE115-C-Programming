#include <stdio.h>

int minimum(int array[], int n);

int main()
{
    int i,n;

    printf("Enter Array Size: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter Array Elements: \n");
    for (i=0; i<n; i++)
        scanf("%d", &a[i]);

    int min=minimum(a,n);
    printf("Minimum Element is: %d\n", min);
    return 0;
}

int minimum(int array[], int n)
{
    int i, min=0;

    for (i=1; i<n; i++)
    {
        if (array[i]<array[min])
            min = i;
    }

    return array[min];
}
