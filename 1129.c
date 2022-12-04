#include<stdio.h>
int main()
{
    int x ,i=0;
    int a,b,c,d,e;
    int kala=0;
    do{
          scanf("%d",&x);

          for ( i = 0; i < x; i++)
         {
             scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

            if(a <= 127)
            { kala++; a = 1; } else { a = 0; }
            
            if(b <= 127)
            { kala++; b = 1; } else { b = 0; }
            
            if(c <= 127)
            { kala++; c = 1; } else { c = 0; }
            
            if(d <= 127)
            { kala++; d = 1; } else { d = 0; }
            
            if(e <= 127)
            { kala++; e = 1; } else { e = 0; }



            if (kala==1)
            {
                 if (a==1){printf("A\n");}
                 if (b==1){printf("B\n");}
                 if (c==1){printf("C\n");}
                 if (d==1){printf("D\n");}
                 if (e==1){printf("E\n");}
            }
            else
            {
                 printf("*\n");
            }
            kala=0;
          }

    }
    while (x!=0);
    
     return 0;
}