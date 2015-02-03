#include<stdio.h>

int gcd(int a, int b)
{
  if(b==0)
    return a;
  else
    return gcd(b,a%b);
  //  return 1;
}
int main()
{
  int T,N[10];
  int i,j;
  int pdt=1;
  scanf("%d",&T);
  for(i=0;i<T;i++)
    {
      scanf("%d",&N[i]);
    }
  for(j=0;j<T;j++)
    {
      for(i=1;i<=N[j];i++)
	{
	  pdt=(pdt*i)/gcd(i,pdt);
	}
      printf("%d\n",pdt);
      pdt=1;
    }
  return 0;
}
