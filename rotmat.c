#include<stdio.h>

int main()
{
  int a[10][10],i,j,r,c;
  scanf("%d",&r);
  scanf("%d",&c);
  for(i=0;i<r;i++)
    for(j=0;j<c;j++)
      scanf("%d",&a[i][j]);

for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
	printf("%d\t",a[j][i]);
      printf("\n");
    }
  for(i=0;i<r;i++)
    {
      for(j=(c-1);j>=0;j--)
	printf("%d\t",a[j][i]);
      printf("\n");
    }
  return 0;
}
