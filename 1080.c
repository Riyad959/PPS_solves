#include<stdio.h>
int main()
{
    int num[100] , i ,j , highest=0,position;
    for ( i = 0; i < 100; i++)
    {
        scanf("%d",&num[i]);
        if (num[i]>highest)
        {
            highest=num[i];
            position=i+1;
        }
        
    }
        printf("%d\n",highest);
        printf("%d\n",position);
    
     return 0;
}