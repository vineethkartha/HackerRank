#include<stdio.h>

int main()
{
    int T,N[10],K[10],arv[10][1000];
    int i,j;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d %d",&N[i],&K[i]);
        for(j=0;j<N[i];j++)
            scanf("%d",&arv[i][j]);
    }
    int cnt=0;
    for(i=0;i<T;i++)
    {
        cnt=0;
        for(j=0;j<N[i];j++)
        {
            if(arv[i][j]<=0)
                cnt++;
        }
        if(cnt>=K[i])
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}
