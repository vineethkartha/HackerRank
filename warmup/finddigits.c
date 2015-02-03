/*
Problem Statement

You are given an integer N. Find the digits in this number that exactly divide N(division that leaves 0 as remainder) and display their count. For N=24, there are 2 digits − 2 & 4. Both of these digits exactly divide 24. So our answer is 2.

Note

    If the same number is repeated twice at different positions, it should be counted twice, e.g., For N=122, 2 divides 122 exactly and occurs at ones' and tens' position. So for this case, our answer is 3.
    Division by 0 is undefined.

Input Format

The first line contains T (number of test cases) followed by T lines (each containing an integer N).

Constraints
1≤T≤15
0<N<1010

Output Format

For each test case, display the count of digits in N that exactly divide N in a separate line. 
*/

#include<stdio.h>

int main()
{
  int N[15],count=0;
  int T;
  int div,temp;
  int i,j;
scanf("%d",&T);
  for(i=0;i<T;i++)
    scanf("%d",&N[i]);
  for(i=0;i<T;i++)
    {
      temp=N[i];
      count=0;
      while(temp>0)
	{
	  div=temp%10;
	  temp/=10;
	  if(div!=0)
	    {
	      if(N[i]%div==0)
		count++;
	    }
	}
      printf("%d\n",count);
    }
  return 0;
}
