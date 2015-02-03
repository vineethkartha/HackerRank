/*
Problem Statement

You will be given a list of 32-bits unsigned integers. You are required to output the list of the unsigned integers you get by flipping bits in its binary representation (i.e. unset bits must be set, and set bits must be unset).

Input Format

The first line of the input contains the list size T. T lines follow each line having an integer from the list.

Constraints

1 ≤ T ≤ 100

Output Format

Output one line per element from the list with the requested result.
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    unsigned int T,ar[100];
    int i;
    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%u",&ar[i]);
    }
    for(i=0;i<T;i++){
        printf("%u\n",~ar[i]);
    }
    return 0;
}

