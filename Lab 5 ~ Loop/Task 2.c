#include<stdio.h>
#include<math.h>

int main()
{
    int i,n;
    float sum;
    printf("Enter the N of the Series: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        sum=sum+(1.0/(i*i));
    }
    printf("The Sum of the Series is: %.2f\n", sum);
    return 0;
}
