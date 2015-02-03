/*
Service lane question in hacker rank
Authored by abhiranjan on Nov 21 2013
https://www.hackerrank.com/challenges/service-lane
*/
#include<stdio.h>
int main()
  {
  int N,T;
  int width[100000];
  int i,j,lc,l2;
  int min=0;
  scanf("%d %d",&N,&T);
  //printf("%d %d",N,T);
  for(lc=0;lc<N;lc++){
    scanf("%d",&width[lc]);
  }
  for(lc=0;lc<T;lc++){
    scanf("%d %d",&i,&j);
    min=width[i];
    for(l2=i+1;l2<=j;l2++)
      {
      if(width[l2]<min)
        min=width[l2];
    }
    printf("%d\n",min);
  }
  return 0;
}
