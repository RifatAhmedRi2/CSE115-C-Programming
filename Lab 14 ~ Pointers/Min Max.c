#include <stdio.h>

void MinMax(int array[], int size, int *max, int *min);

int main()
{
    int i,n,ma,mi;

    printf("Enter Array Size: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter Array Elements: \n");
    for (i=0; i<n; i++)
        scanf("%d", &a[i]);

    MinMax(a,n,&ma,&mi);
    printf("Minimum Element: %d\n", mi);
    printf("Maximum Element: %d\n", ma);
    return 0;
}

void MinMax(int array[], int size, int *max, int *min)
{
    int i;
    *max=array[0], *min=array[0];

    for (i=1; i<size; i++)
    {
        if (array[i]>*max)
            *max = array[i];
        if (array[i]<*min)
            *min = array[i];
    }
}
