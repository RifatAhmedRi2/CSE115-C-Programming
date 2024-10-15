#include <stdio.h>
#include <math.h>

int main()
{
    int week;
    printf("Enter the Day Number of the Week: ");
    scanf("%d", &week);

    switch(week)
    {
        case 1:
            printf("Saturday");
            break;
        case 2:
            printf("Sunday");
            break;
        case 3:
            printf("Monday");
            break;
        case 4:
            printf("Tuesday");
            break;
        case 5:
            printf("Wednesday");
            break;
        case 6:
            printf("Thursday");
            break;
        case 7:
            printf("Friday");
            break;
        default:
            printf("Wrong Entry");
    }
    return 0;
}
