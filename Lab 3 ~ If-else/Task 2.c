#include <stdio.h>
#include <math.h>

int main()
{
    int unit, tenth, hundred, n;
    printf("Enter the 3 Digit Number: ");
    scanf("%d", &n);
    unit = n%10;
    n = n/10;
    tenth = n%10;
    n = n/10;
    hundred = n%10;
    n = n;

    if (unit<tenth)
    {
        if (unit<hundred)
            printf("%d is the Minimum Digit\n", unit);
        else
            printf("%d is the Minimum Digit\n", hundred);
    }
    else if (tenth<hundred)
        printf("%d is the Minimum Digit\n", tenth);
    else
        printf("%d is the Minimum Digit\n", hundred);

    return 0;
}

