#include<stdio.h>
int main()
{
    int x,y,total=0,i;
    scanf("%d %d", &x, &y);
    if (x>y)
    {
        for ( i = y; i <= x; i++)
        {
            if (i%13!=0)
            {
                total+=i;
            }
            
        }
        
    }

    if (x<y)
    {
        for ( i = x; i <= y; i++)
        {
            if (i%13!=0)
            {
                total+=i;
            }
            
        }
    }
    
    printf("%d\n", total);
    
    return 0;
}