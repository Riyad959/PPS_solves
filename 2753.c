#include<stdio.h>
int main()
{
    int x[26];
    int a,b;
    for (a = 0,b=97; a <26; a++,b++)
    {
        x[a]=b;
    }
    for (a = 0; a < 26; a++)
    {
        printf("%d e %c\n",x[a],x[a]);
    }
    

    return 0;
}