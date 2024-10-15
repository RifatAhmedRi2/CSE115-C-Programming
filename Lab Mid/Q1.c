#include<stdio.h>
#include<math.h>

int main()
{
    int ul, ll;
    printf("Enter Lower Limit: ");
    scanf("%d", &ll);
    printf("Enter Upper Limit: ");
    scanf("%d", &ul);

    switch(ll)
    {
        case 1: printf("One ");
        case 2: printf("Two ");
        case 3: printf("Three ");
        case 4: printf("Four ");
        case 5: printf("Five ");
        case 6: printf("Six ");
        case 7: printf("Seven ");
        case 8: printf("Eight ");
        case 9: printf("Nine ");
    }

    for (ll=10; ll<=ul; ll++)
    {
        if(ll%2==0)
            printf("Even ");
        else
            printf("Odd ");
    }

    return 0;
}
