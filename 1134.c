#include<stdio.h>
int main()
{
    int a=0,g=0,d=0,gas,x=0;

    while (x==0)
    {
        scanf("%d", &gas);
        if (gas==1)
        {
            a++;
        }
        if (gas==2)
        {
            g++;
        }
        if (gas==3)
        {
            d++;
        }
        if (gas==4)
        {
            x=1;
        }  
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",a);
    printf("Gasolina: %d\n",g);
    printf("Diesel: %d\n",d);
    return 0;
}