#include<stdio.h>
#include<math.h>

int main()
{
    int i;
    char c;
    for(i=65; i<=90; i++)
    {
        c=i;
        printf("%d \t %c\n", i, c);
    }

    int is;
    char cs;
    for(is=97; is<=122; is++)
    {
        cs=is;
        printf("%d \t %c\n", is, cs);
    }
    return 0;
}
