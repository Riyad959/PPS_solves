#include<stdio.h>
int main()
{
    int x , y, a , total=0;
    scanf("%d %d", &y , &x);
    for ( a = x+1; a < y; a++)
    {
        if (a%2!=0)
        {
            total+=a;
        }
        
    }
    printf("%d\n",total);
     return 0;
}