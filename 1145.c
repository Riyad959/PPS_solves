#include<stdio.h>
int main()
{
    int x,y,i,j;
    scanf("%d %d", &x, &y);
    i=1;
    while (i <= y)
    {
        for ( j = 0; j < x; j++)
        {
            printf("%d ",i);
            i++;
        }
        printf("\n");
    }
    
    return 0;
}