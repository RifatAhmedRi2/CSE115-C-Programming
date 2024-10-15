#include <stdio.h>
int main()
{
    int unit, tenth, hundred, thou, ten_thou, n, sum;
    printf("Enter the 5 Digit Number: ");
    scanf("%d", &n);
    unit = n%10;
    n = n/10;
    tenth = n%10;
    n = n/10;
    hundred = n%10;
    n = n/10;
    thou = n%10;
    n = n/10;
    ten_thou = n;
    sum = unit+tenth+hundred+thou+ten_thou;
    printf("The sum of the Digits will be: %d\n", sum);
    return 0;
}
