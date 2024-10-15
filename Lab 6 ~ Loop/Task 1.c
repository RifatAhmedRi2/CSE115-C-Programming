#include<stdio.h>
#include<math.h>

int main()
{
    char c;
    int val=97;
    for (c='a'; c<='z'; c++, val++)
    {
        printf("%c \t %d\n", c, val);
    }

    char cc;
    int val_c=65;
    for (cc='A'; cc<='Z'; cc++, val_c++)
    {
        printf("%c \t %d\n", cc, val_c);
    }
    return 0;
}
