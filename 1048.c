#include<stdio.h>
int main()
{
    float a,ts,me,per;
    scanf("%f", &a);
    if (a>=0 && a<=400.00)
    {
        ts = a + a*.15;
        me = ts - a;
        per = 15;
    }
    else if (a>=400.01 && a<=800.00)
    {
        ts = a + a*.12;
        me = ts - a;
        per = 12;
    }
    else if (a>=800.01 && a<=1200.00)
    {
        ts = a + a*.10;
        me = ts - a;
        per = 10;
    }
    else if (a>=1200.01 && a<=2000.00)
    {
        ts = a + a*.07;
        me = ts - a;
        per = 7;
    }
    else if (a>2000.00)
    {
        ts = a + a*.04;
        me = ts - a;
        per = 4;
    }
    printf("Novo salario: %0.2f\n",ts);
    printf("Reajuste ganho: %0.2f\n",me);
    printf("Em percentual: %0.0f %%\n",per);
    
    return 0;
}