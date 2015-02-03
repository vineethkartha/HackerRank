#include<stdio.h>

int main()
{
  int T;
  char str[100000];
  int i,j;
  int count=0;
  scanf("%d",&T);
  for(i=0;i<T;i++)
    {
      scanf(" %s",str);
      j=0;
      while(str[j]!='\0')
	{
	  if(str[j]==str[j+1])
	    count++;
	  j++;
	}
      printf("%d\n",count);
      count=0;
    }
  return 0;
}
