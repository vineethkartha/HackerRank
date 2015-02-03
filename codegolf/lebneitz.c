/*
Problem Statement

In Calculus, the Leibniz formula for π is given by:

Leibniz

or:

Summation

You will be given an integer n. Your task is to print the summation of the Leibniz formula up to the nth term of the series correct to 15 decimal places.

Input Format

The first line contains the number of test cases (T) which is less than 100. Each additional line is a test case for a positive integer value (p) less than 10^7.

Sample Input

2
10
20

Output Format

Output T lines, with each line containing the summation up to nth term.
*/
#include<stdio.h>
#include<math.h>
int main(){
	int T,i,n[100],j;
	double res;
	scanf("%d",&T);
	for(i=0;i<T;i++)
		scanf("%d",&n[i]);
		for(i=0;i<T;i++){
			res=0;
		for(j=0;j<n[i];j++){
			res+=pow(-1,j)/(2*j+1);
		}
		printf("%0.15f\n",res);
	}
}
