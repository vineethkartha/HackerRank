/*
Problem Statement

Alex is attending a Halloween party with his girlfriend Silvia. At the party, Silvia spots a giant chocolate bar. If the chocolate can be served as only 1 x 1 sized pieces and Alex can cut the chocolate bar exactly K times, what is the maximum number of chocolate pieces Alex can cut and give Silvia?

Input Format
The first line contains an integer T, the number of test cases. T lines follow.
Each line contains an integer K

Output Format
T lines. Each line contains an integer that denotes the maximum number of pieces that can be obtained for each test case.

Constraints
1<=T<=10
2<=K<=107

Note
Chocolate must be served in size of 1 x 1 size pieces.
Alex can't relocate any of the pieces, nor can he place any piece on top of another.
*/

#include<stdio.h>
int main(){
  int T;
  long long int K;
  int i,j;
  scanf("%d",&T);
  for(i=0;i<T;i++){
	scanf("%lld",&K);
    printf("%lld\n",((K-K/2)*(K/2)));
  }
  return 0;
}
