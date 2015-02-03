/*

What this means
As the size of an input (N) increases, Insertion Sort's running time will increase by the square of N. So Insertion Sort can work well for small inputs, but becomes unreasonably slow for larger inputs. For large inputs, people use sorting algorithms that have better running times, which we will examine later.

Challenge
Can you modify your previous Insertion Sort implementation to keep track of the number of shifts it makes while sorting? The only thing you should print is the number of shifts made by the insertion sort algorithm to completely sort the array. A shift occurs when an element's position changes in the array. (Do not shift an element if it is not necessary.)

Input Format
The first line contains N, the number of elements to be sorted. The next line contains N integers a[1],a[2]...,a[N].

Output Format
Output the number of shifts it takes.
*/
#include<stdio.h>
//#define size 10
int main()
{
  int arr[1001];
  int i,j,size;
  int cnt=0;
  scanf("%d",&size);
  for(i=0;i<size;i++)
    {
      scanf("%d",&arr[i]);
    }
  for(i=1;i<size;i++)
    {
      j=i-1;
      int num=arr[i];
      while(j>=0 && arr[j]>num)
	{
	  cnt++;
	  arr[j+1]=arr[j];
	  arr[j]=num;
	  j--;
	}
    }
  printf("%d\n",cnt);
  /*for(i=0;i<size;i++)
    {
      printf("%d\n",arr[i]);
      }*/
  return 0;
}
