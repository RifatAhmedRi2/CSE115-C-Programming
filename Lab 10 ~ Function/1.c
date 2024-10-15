#include <stdio.h>

void Star(int n);

int main()
{
    int x;
    printf("Enter the Number of Stars: ");
    scanf("%d", &x);
    Star(x);
    return 0;
}

void Star(int n)
{
    int i;
    for(i=1; i<=n; i++)
        printf("*");
}
