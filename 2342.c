#include<stdio.h>
int main()
{
    int x,p,q;
    char opp;
    scanf("%d %d %c %d",&x,&p,&opp,&q);
    if (opp=='+')
    {
        if (p+q>x)
        {
            printf("OVERFLOW\n");
        }
        else
        
            printf("OK\n");
         
    }
    if (opp=='*')
    {
        if (p*q > x)
        {
            printf("OVERFLOW\n");
        }
        else
        
            printf("OK\n");
          
    }
    
    return 0;
}