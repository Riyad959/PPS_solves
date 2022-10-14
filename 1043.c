#include <stdio.h>
int main()
{
    float A, B, C ,para ,ar;
    scanf("%f %f %f", &A, &B, &C);
    if ((A+B)>C && (B+C)>A && (C+A)>B)
    {
        para = A+B+C;
        printf("Perimetro = %0.1f\n", para);
    }
    else
    {
        ar= 0.5*(A+B)*C;
        printf("Area = %0.1f\n", ar);
    }
    
    return 0;
}