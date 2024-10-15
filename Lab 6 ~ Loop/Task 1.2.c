#include<stdio.h>
int main()
{
    int i;
    char c;
    for(i=65; i<=90; i++)
    {
        c=i;
        printf("%d\t %c\n", i+32,c+32);

    }
    for(i=65; i<=90; i++)
    {
        c=i;
        printf("%d\t %c\n", i,c);

    }

    return 0;
}
