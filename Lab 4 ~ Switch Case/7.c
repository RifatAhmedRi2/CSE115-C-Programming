#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    printf("Enter the Number: ");
    scanf("%d", &num);

    switch(num>0)
    {
        case 1:
            printf("%d is Positive\n", num);
            break;
        case 0:
            {
                switch(num==0)
                {
                    case 1:
                        printf("The Number is Zero\n", num);
                        break;
                    case 0:
                        printf("%d is Negative\n", num);
                        break;
                }
            }
    }
    return 0;
}
