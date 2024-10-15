#include <stdio.h>
#include <math.h>

int main()
{
    char ch;
    printf("Enter The Character : ");
    scanf("%c", &ch);

    if (ch >= '0' && ch <= '9')
        printf("It's a Digit");
    else if (ch >= 'A' && ch <= 'Z')
        printf("It's an Upper Case Letter");
    else if (ch >= 'a' && ch <= 'z')
        printf("It's a Lower Case Letter");
    else
        printf("Invalid Character");
    return 0;
}
