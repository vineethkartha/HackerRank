
#include<stdio.h>

signed long int maxnum(signed long int a ,signed long int b)
{
  return(a>b?a:b);
}
signed long int contiguous(signed long int *ar, signed long int size)
{
  signed long int i;
  signed long int curMax=ar[0],max_sum=ar[0];
  for(i=1;i<size;i++)
    {
      
      curMax=maxnum(ar[i],curMax+ar[i]);
      max_sum=maxnum(max_sum,curMax);
    }
  return  max_sum;
}

signed long int noncontiguous(signed long int *ar, signed long int size)
{
  signed long int i;
  signed long int max_sum=ar[0],neg_max=ar[0];
  for(i=1;i<size;i++)
    {
      if(ar[i]>=0)
	{
	  max_sum+=ar[i];
	}
      else
	{
	  neg_max=maxnum(neg_max,ar[i]);
	}
    }
  return  maxnum(max_sum,neg_max);
}

signed long int main()
{
  signed long int T;
  signed long int i,j;
  signed long int N[10],ar1[10][100000];
  scanf("%ld",&T);
  for(i=0;i<T;i++)
    {
      scanf("%ld",&N[i]);
      for(j=0;j<N[i];j++)
	{
	  scanf("%ld",&ar1[i][j]);
	}
    }
  signed long int sum1=0,sum2=0;
  for(i=0;i<T;i++)
    {
      for(j=0;j<N[i];j++)
	{
	  sum1=contiguous(ar1[i],N[i]);
	  sum2=noncontiguous(ar1[i],N[i]);
	}
      printf("%ld %ld\n",sum1,sum2);
    }
  
  return 0;
}
