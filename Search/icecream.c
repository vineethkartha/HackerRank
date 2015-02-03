/*

Problem Statement

Sunny and Johnny together have M dollars and want to spend the amount at an ice cream parlour. The parlour offers N flavors, and they want to choose 2 flavors so that they end up spending the whole amount.

You are given a list of cost of these N flavors. The cost of ith flavor is denoted by (ci). You have to display the indices of two flavors whose sum is M.

Input Format

The first line of the input contains T, T test cases follow.
Each test case follows the format: The first line contains M. The second line contains N. The third line contains N single space separated integers denoting the price of each flavor. Here, ith integer denotes ci.

Output Format

Output two integers, each of which is a valid index of the flavor. The lower index must be printed first. Indices are indexed from 1 to N.
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

  int t,n,m;
  int c[10000];
  int i,j;
  scanf("%d", &t);
  while ( t-- )
    {
      scanf("%d %d",&m,&n);
      for(i=0;i<n;i++)
	scanf("%d",&c[i]);
      for(i=0;i<n;i++)
	{
	  if(c[i]<m)
	    {
	      for(j=i+1;j<n;j++)
		{
		  if((m-c[i])==c[j])
		    {
		      printf("%d %d\n",(i+1),(j+1));
		      break;
		    }
		}
	    }
	}
    }
  return 0;
}
