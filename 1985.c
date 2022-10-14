#include<stdio.h>
int main()
{
    int a,pn,nop,quantity;
    float total=0;
    scanf("%d",&nop);
    for ( a = 0; a < nop; a++)
    {
        scanf("%d %d", &pn,& quantity);
        if (pn==1001)
        {
            total=total+1.5*quantity;
        }
        if (pn==1002)
        {
            total=total+2.5*quantity;
        }
        if (pn==1003)
        {
            total=total+3.5*quantity;
        }
        if (pn==1004)
        {
            total=total+4.5*quantity;
        }
        if (pn==1005)
        {
            total=total+5.5*quantity;
        }
        
    }

    printf("%.2f\n",total);
    
    return 0;
}