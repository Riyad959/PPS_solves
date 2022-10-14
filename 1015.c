#include<stdio.h>
#include<math.h>

int main()
{
    double x1,x2,y1,y2,dis,a,b;
    scanf("%lf %lf %lf %lf", &x1,&y1,&x2,&y2);
    a=pow((x2-x1),2);
    b=pow((y2-y1),2);
    dis=sqrt(a+b);
    printf("%0.4lf\n", dis);

    return 0;
}