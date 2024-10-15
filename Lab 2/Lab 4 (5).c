#include<stdio.h>
#include<math.h>

int main()
{
    int day,year,week;
    printf("Enter the Amount of Days to Convert: ");
    scanf("%d", &day);
    year = day/365;
    week = (day%365)/7;
    day = day-(year*365+week*7);
    printf("%d Year(s) %d Week(s) %d Day(s)\n", year,week,day);
    return 0;
}
