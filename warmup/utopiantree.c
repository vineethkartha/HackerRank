/*
Problem Statement

The Utopian Tree goes through 2 cycles of growth every year. The first growth cycle occurs during the spring, when it doubles in height. The second growth cycle occurs during the summer, when its height increases by 1 meter.
Now, a new Utopian Tree sapling is planted at the onset of spring. Its height is 1 meter. Can you find the height of the tree after N growth cycles?

Input Format
The first line contains an integer, T, the number of test cases.
T lines follow. Each line contains an integer, N, that denotes the number of cycles for that test case.

Constraints
1 <= T <= 10
0 <= N <= 60

Output Format
For each test case, print the height of the Utopian Tree after N cycles. 
*/

#include<stdio.h>

int main(){
  int N,T;
  int i,j;
  int L=1;
  scanf("%d",&T);
  for(i=0;i<T;i++){
    scanf("%d",&N);
    for(j=0;j<N;j++){
      if(j%2==0)
        L=L*2;
      else
        L=L+1;
    }
      printf("%d\n",L);
    L=1;
  }
  return 0;
}
