#include <stdio.h>
#include <math.h>

int main()
{
    int month;
    printf("Enter the Month Number: ");
    scanf("%d", &month);

    switch(month)
    {
        case 1:
            printf("The Number of Days in that Month is 31");
            break;
        case 2:
            printf("The Number of Days in that Month is 28");
            break;
        case 3:
            printf("The Number of Days in that Month is 31");
            break;
        case 4:
            printf("The Number of Days in that Month is 30");
            break;
        case 5:
            printf("The Number of Days in that Month is 31");
            break;
        case 6:
            printf("The Number of Days in that Month is 30");
            break;
        case 7:
            printf("The Number of Days in that Month is 31");
            break;
        case 8:
            printf("The Number of Days in that Month is 31");
            break;
        case 9:
            printf("The Number of Days in that Month is 30");
            break;
        case 10:
            printf("The Number of Days in that Month is 31");
            break;
        case 11:
            printf("The Number of Days in that Month is 30");
            break;
        case 12:
            printf("The Number of Days in that Month is 31");
            break;
        default:
            printf("Wrong Entry");
    }
    return 0;
}
