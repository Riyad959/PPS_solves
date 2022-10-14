#include<stdio.h>
int main()
{
    int n,i,a;
    scanf("%d",&a);
    for (i = 1; i <=a; i++)
    {
        scanf ("%d",&n);
        if (n==0)
        {
            printf("NULL\n");
        }
        if (n>0 && n%2==0)
        {
            printf("EVEN POSITIVE\n");
        }
        if(n<0 && n%2==0)
        {
            printf ("EVEN NEGATIVE\n");
        }
        if (n>0 && n%2!=0)
        {
            printf("ODD POSITIVE\n");
        }
        if(n<0 && n%2!=0)
        {
            printf ("ODD NEGATIVE\n");
        }
    
    }

    return 0;
}