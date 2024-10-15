#include <stdio.h>
#include <math.h>

int main()
{
    int n1, n2, n3;
    printf("Enter the values of Number 1: ");
    scanf("%d", &n1);
    printf("Enter the values of Number 2: ");
    scanf("%d", &n2);
    printf("Enter the values of Number 3: ");
    scanf("%d", &n3);

    if (n1>n2)
    {
        if (n1>n3)
            printf("%d is the Maximum among the 3 given Numbers\n", n1);
        else
            printf("%d is the Maximum among the 3 given Numbers\n", n3);
    }
    else if (n2>n3)
        printf("%d is the Maximum among the 3 given Numbers\n", n2);
    else
        printf("%d is the Maximum among the 3 given Numbers\n", n3);

    return 0;
}
