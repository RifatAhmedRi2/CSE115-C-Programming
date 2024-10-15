#include <stdio.h>
#include <math.h>

int main()
{
    int tk, bill;
    float dis;
    printf("Enter Purchase tk: ");
    scanf("%d", &tk);

    if(tk<=2000)
        dis=tk*0.04;
    else if(tk<=7000)
        dis = (tk-2000)*0.08+(2000*0.04);
    else
        dis = (tk-7000)*0.15+(5000*0.08)+(2000*0.04);

	bill = tk-dis;
	printf("The Bill is: %d",bill);
    return 0;
}
