/*

Problem Statement

John has discovered various rocks. Each rock is composed of various elements, and each element is represented by a lowercase latin letter from 'a' to 'z'. An element can be present multiple times in a rock. An element is called a 'gem-element' if it occurs at least once in each of the rocks.

Given the list of N rocks with their compositions, display the number of gem-elements that exist in those rocks.

Input Format
The first line consists of N, the number of rocks.
Each of the next N lines contain rocks' composition. Each composition consists of lowercase letters of English alphabet.

Output Format
Print the number of gem-elements that are common in these rocks. If there are none, print 0.
*/
#include<stdio.h>
#include<string.h>
int main()
{
  int N,i,j;
  int hash[26][2];
  char rocks[100][100];
  int sum=0;
  for(i=0;i<26;i++)
    {
      hash[i][0]=0;
      hash[i][1]=-1;
    }

  scanf("%d",&N);

  for(i=0;i<N;i++)
    {
      scanf("%s",rocks[i]);
    }

  for(i=0;i<N;i++)
    {
      for(j=0;j<strlen(rocks[i]);j++)
	{
	  if(hash[(rocks[i][j]-97)%26][1]!=i)
	    {
	      hash[(rocks[i][j]-97)%26][0]+=1;
	    }
	  hash[(rocks[i][j]-97)%26][1]=i;
	}
    }
  for(i=0;i<26;i++)
    {
      if(hash[i][0]==N)
	sum++;
    }
  printf("%d\n",sum);
  return 0;
}
