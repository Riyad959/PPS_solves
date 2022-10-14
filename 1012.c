#include<stdio.h>
int main()
{
    double a,b,c;
    double area,radius,trapi,square,rectangle;
    scanf("%lf %lf %lf", &a, &b, &c);
    area=0.5*a*c;
    radius=3.14159*c*c;
    trapi=((a+b)/2)*c;
    square=b*b;
    rectangle=a*b;
    printf("TRIANGULO: %.3lf\n", area);
    printf("CIRCULO: %.3lf\n", radius);
    printf("TRAPEZIO: %.3lf\n", trapi);
    printf("QUADRADO: %.3lf\n", square);
    printf("RETANGULO: %.3lf\n", rectangle);

    return 0;
}