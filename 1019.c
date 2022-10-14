#include<stdio.h>
int main()
{
    int time,i;
    int clock[]={3600,60,1};
    int place[3];
    scanf("%d", &time);
    for (i = 0; i < 3; i++)
    {
        place[i]=(time/clock[i]);
        time=time%clock[i];
    }
    printf("%d:%d:%d\n", place[0], place[1], place[2]);
    
    return 0;
}
