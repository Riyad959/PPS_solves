#include<stdio.h>
int main()
{
    int x , i , sum , num1=0 , num2=1;
    scanf("%d",&x);
    printf("%d %d ",num1 ,num2);
    sum=num1+num2;
    for ( i = 3 ; i < x ; i++)
    {
        printf("%d ",sum);
        num1=num2;
        num2=sum;
        sum=num2+num1;
    }  
    printf("%d\n",sum);
     return 0;
}