#include<stdio.h>
#include<string.h>

int main()
{
    char str[100], revstr[100];
    int check;

    printf("Enter String: ");
    gets(str);

    strcpy(revstr,str);
    strrev(revstr);

    check=strcmp(str,revstr);

    if(check==0)
        printf("%s is a Palindrome", str);
    else
        printf("%s is Not a Palindrome", str);

    return 0;
}
