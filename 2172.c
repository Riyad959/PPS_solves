#include <stdio.h>
int main()
{
    long long int A, m;
    while(1)
    {
        scanf("%lld  %lld", &A, &m);
        if(A==0 && m==0) 
        break;
        printf("%lld\n", A*m);
    }
    return 0;
}