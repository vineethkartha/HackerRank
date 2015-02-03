/*
https://www.hackerrank.com/challenges/handshake
*/
#include<stdio.h> 
int main()
{
	long int T,N[1000000],i;
	scanf("%ld",&T);
	for(i=0;i<T;i++) 
		scanf("%ld",&N[i]);
	for(i=0;i<T;i++) 
		printf("%ld\n",N[i]*(N[i]-1)/2);
	return 0;
}
