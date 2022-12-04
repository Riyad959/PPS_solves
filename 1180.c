#include<stdio.h>
int main()
{
    int a, i, lowest, position;
    scanf("%d",&a);

    
    int x[a];
    for ( i = 0; i < a; i++)
    {
        scanf("%d",&x[i]);
    }
        lowest=x[0];


    for ( i = 1; i < a; i++)
    {
        
        if (x[i] < lowest)
        {
            lowest = x[i];
            position = i;
        }
    }
    
    printf("Menor valor: %d\n",lowest);
    printf("Posicao: %d\n",position);
    
     return 0;
}