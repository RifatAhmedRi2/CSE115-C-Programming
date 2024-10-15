#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,temp;
    printf("Enter the 1st Number: ");
    scanf("%d", &a);
    printf("Enter the 2nd Number: ");
    scanf("%d", &b);
    temp = b;
    b = a;
    a = temp;
    printf("The Interchanged Values are:\n       A=%d & B=%d\n",a,b);
    return 0;
}
