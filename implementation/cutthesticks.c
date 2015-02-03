/*
Problem Statement

You are given N sticks, where each stick is of positive integral length. A cut operation is performed on the sticks such that all of them are reduced by the length of the smallest stick. 

Input Format
The first line contains a single integer N.
The next line contains N integers: a0, a1,...aN-1 separated by space, where ai represents the length of ith stick.

Output Format
For each operation, print the number of sticks that are cut in separate line. 
*/
#include<stdio.h>
#include<stdlib.h>

//#define len 10

void printArray(int arr[],int size)
{
  int i;
  for(i=0;i<size;i++)
    {
      printf("%d\n",arr[i]);
    }
}

void merge(int L[],int sizeL, int R[], int sizeR, int A[])
{
  int i=0,j=0,k=0;
  while(i<sizeL && j<sizeR)
    {
      if(L[i]<=R[j])
	{
	  A[k]=L[i];
	  i++;
	}
      else
	{
	  A[k]=R[j];
	  j++;
	}
      k++;
    }
  while(i<sizeL)
    {
      A[k]=L[i];
      i++;
      k++;
    }
  while(j<sizeR)
    {
      A[k]=R[j];
      j++;
      k++;
    }
}

void partition(int A[],int size)
{
  int mid;
  int i;
  int L[10],R[10];
  if(size<2)
    return;
  else
    {
      mid=size/2;
      for(i=0;i<mid;i++)
	{
	  L[i]=A[i];
	}
      for(i=0;i<(size-mid);i++)
	{
	  R[i]=A[i+mid];
	}
      partition(L,mid);
      partition(R,(size-mid));
      merge(L,mid,R,(size-mid),A);
    }
}

int main()
{
  int arr[1000];
  int len,i;
  scanf("%d",&len);
  for(i=0;i<len;i++)
    {
      scanf("%d",&arr[i]);
    }
  partition(arr,len);
  printArray(arr,len);
  return 0;
}
