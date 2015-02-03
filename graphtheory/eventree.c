#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
  int value;
  struct node *child[100];
}node;


int main()
{
  int N,M;
  node *root;
  int i,j;
  int u,v;
  scanf("%d %d",&N,&M);
  for(i=0;i<M;i++)
    {
      scanf("%d %d",&u,&v);
      root=malloc(sizeof(node));
      if(root==NULL)
	return 1;
      
    }
  return 0;
}
