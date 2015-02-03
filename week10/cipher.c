#include<stdio.h>
int main()
{
  int N,K;
  int i,j;
  char str[2000000];
  int ans[1000000];
  scanf("%d %d",&N,&K);
  scanf(" %s",str);
  for(i=0;i<N;i++)
    {
      ans[i]=0;
      if(i<K)
	{
	  ans[i]^=(str[i]-'0');
	  for(j=i-1;j>=0;j--)
	    {
	      ans[i]^=ans[j];
	    }
	}
      else
	{
	  ans[i]^=(str[i]-'0');
	  for(j=i-1;j>=i-K+1;j--)
	    {
	      ans[i]^=ans[j];
	    }
	}
    }
  for(i=0;i<N;i++)
    printf(" %d",ans[i]);
  return 0;
}
