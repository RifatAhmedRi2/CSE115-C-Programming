#include<stdio.h>
#include<math.h>

struct Point
{
    int x;
    int y;
};

int main()
{
    int i, n, x, y;
    float sum;
    printf("Enter the Number of Points: ");
    scanf("%d", &n);

    struct Point p[n];

    for(i=0; i<n; i++)
    {
        printf("Enter Point No %d: ", i+1);
        scanf("%d", &p[i].x);
        scanf("%d", &p[i].y);
    }

    x=p[0].x-p[1].x;
    y=p[0].y-p[1].y;
    sum=pow(x,2)+pow(y,2);
    printf("Euclidian Distance for Point 1,2: %.2f\n",  sqrt(sum));
    x=p[1].x-p[2].x;
    y=p[1].y-p[2].y;
    sum=pow(x,2)+pow(y,2);
    printf("Euclidian Distance for Point 2,3: %.2f\n",  sqrt(sum));
    x=p[2].x-p[0].x;
    y=p[2].y-p[0].y;
    sum=pow(x,2)+pow(y,2);
    printf("Euclidian Distance for Point 3,1: %.2f\n",  sqrt(sum));
    return 0;
}
