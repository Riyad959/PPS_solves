#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if (a + b <= c || a + c <= b || b + c <= a)
    {
        printf("Invalido\n");
    }
    
    else{
       
       if (a==b && b==c && c==a)
       {
        printf("Valido-Equilatero\n");
       }
       else if (a==b || b==c || c==a )
       {
        printf("Valido-Isoceles\n");
       }
       else if (a!=b && b!=c && a!=c)
       {
        printf("Valido-Escaleno\n"); 
       }
       if (a* a == (b * b + c * c) || b*b == (a*a + c*c) || c*c== (a*a + b*b))
       {
       printf("Retangulo: S\n");
       }
       else
       printf("Retangulo: N\n");
    }
    

    return 0;
}