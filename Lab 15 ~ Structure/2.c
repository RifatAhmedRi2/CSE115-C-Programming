#include<stdio.h>
#include<math.h>

struct Point
{
    int x;
    int y;
};

float callDist(int x1, int y1, int x2, int y2);

int main()
{
    int i, n;
    float ED;

    struct Point p[n];

    for(i=0; i<2; i++)
    {
        printf("Enter Point No %d: ", i+1);
        scanf("%d", &p[i].x);
        scanf("%d", &p[i].y);
    }

    ED = callDist(p[0].x, p[0].y, p[1].x, p[1].y);

    printf("The Euclidean Distance between them: %.2f\n", ED);
    return 0;
}

float callDist(int x1, int y1, int x2, int y2)
{
    int a,b,sum;
    float ed;
    a=x1-x2;
    b=y1-y2;
    sum=pow(a,2)+pow(b,2);
    ed=sqrt(sum);
    return ed;
}
