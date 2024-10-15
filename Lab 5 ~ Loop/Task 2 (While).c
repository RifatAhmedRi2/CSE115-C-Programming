#include<stdio.h>
#include<math.h>

int main()
{
    int i=1,n;
    float sum;
    printf("Enter the N of the Series: ");
    scanf("%d", &n);

    while(i<=n)
    {
        sum = sum+(1.0/(i*i));
        i++;
    }
    printf("The Sum of the Series is: %.2f\n", sum);
    return 0;
}
