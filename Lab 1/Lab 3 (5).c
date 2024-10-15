#include <stdio.h>
int main()
{
    int x, area;
    printf("Enter the Length of the diagonal of the Square: ");
    scanf("%d", &x);
    area = (x*x)/2;
    printf("The Area of the Square is: %d\n", area);
    return 0;
}
