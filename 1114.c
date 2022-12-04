#include<stdio.h>
int main()
{
    int a ;
    while(scanf("%d",&a)!=2002){
        if (a==2002)
        {
            break;
        }
        printf("Senha Invalida\n");
    }
    printf("Acesso Permitido\n");

     return 0;
}