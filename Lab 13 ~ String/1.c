#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    printf("Enter String Length: ");
    scanf("%d", &n);

    char s1[n+1],s2[n+1],s3[n+1];

    printf("\nEnter First String: ");
    fflush(stdin);
    gets(s1);
    printf("Enter Second String: ");
    fflush(stdin);
    gets(s2);
    printf("Enter Third String: ");
    fflush(stdin);
    gets(s3);

    printf("\nAfter Arranging in Alphabetical Order: \n");
    if (strcmp(s1,s2)<0 && strcmp(s1,s3)<0)
    {
        puts(s1);
        if (strcmp(s2,s3)<0)
        {
            puts(s2);
            puts(s3);
        }
        else
        {
            puts(s3);
            puts(s2);
        }
    }

    if (strcmp(s2,s1)<0 && strcmp(s2,s3)<0)
    {
        puts(s2);
        if (strcmp(s1,s3)<0)
        {
            puts(s1);
            puts(s3);
        }
        else
        {
            puts(s3);
            puts(s1);
        }
    }

    if (strcmp(s3,s1)<0 && strcmp(s3,s2)<0)
    {
        puts(s3);
        if (strcmp(s1,s2)<0)
        {
            puts(s1);
            puts(s2);
        }
        else
        {
            puts(s2);
            puts(s1);
        }
    }

    return 0;
}
