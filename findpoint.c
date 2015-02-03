#include<stdio.h>
#include<math.h>
/*
(x2-x1)=(x-x2)
*/
struct point{
    int x,y;
};
int main()
{
    int T;
    int i=0,d;
    struct point P[15],Q[15];
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf(" %d %d %d %d",&P[i].x,&P[i].y,&Q[i].x,&Q[i].y);
    }
    for(i=0;i<T;i++)
    {
        int x=Q[i].x-P[i].x+Q[i].x;
        int y=Q[i].y-P[i].y+Q[i].y;
        printf("%d %d\n",x,y);
    }
}
