#include<stdio.h>

int main()
{

  int N,K,C[100];
  int x[100];
  int sum=0;
  int i,j;
  scanf("%d %d",&N,&K);
  for(i=0;i<K;i++)
    x[i]=0;

  for(i=0;i<N;i++)
    scanf("%d",&C[i]);
  j=0;
  for(i=0;i<N;i++)
    {
      sum+=(x[j]+1)*C[i];
      x[j]+=1;
      if(j<K)
	j++;
      else
	j=0;
    }
  printf("%d\n",sum);
  return 0;
}
