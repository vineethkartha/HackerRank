/*
Challenge
Given a list of integers, can you count and output the number of times each value appears?

Hint: There is no need to sort the data, you just need to count it.

Input Format
There will be two lines of input:

    n - the size of the list
    ar - n space separated numbers that makes up the list

Output Format
Output the number of times every number from 0 to 99 (inclusive) appears in the list. 
*/

#include<stdio.h>

int main()
{
  int hash[100],i,n;
  int ar[1000000];
  for(i=0;i<100;i++)
    hash[i]=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&ar[i]);
  for(i=0;i<n;i++)
    {
      hash[ar[i]]++;
    }
  for(i=0;i<100;i++)
    printf("%d ",hash[i]);
  printf("\n");
  return 0;
}
