/*
Problem Statement

Sorting
One common task for computers is to sort data. For example, people might want to see all their files on a computer sorted by size. Since sorting is a simple problem with many different possible solutions, it is often used to introduce the study of algorithms.

Insertion Sort
These challenges will cover Insertion Sort, a simple and intuitive sorting algorithm. We will first start with an already sorted list.

Insert element into sorted list
Given a sorted list with an unsorted number V in the right-most cell, can you write some simple code to insert V into the array so it remains sorted?

Print the array every time a value is shifted in the array until the array is fully sorted. The goal of this challenge is to follow the correct order of insertion sort.

Guideline: You can copy the value of V to a variable, and consider its cell "empty". Since this leaves an extra cell empty on the right, you can shift everything over until V can be inserted. This will create a duplicate of each value, but when you reach the right spot, you can replace a value with V.

Input Format
There will be two lines of input:

    s - the size of the array
    ar - the sorted array of integers

Output Format
On each line, output the entire array every time an item is shifted in it. 
*/

#include<stdio.h>

int main(){
    int s, ar[1000];
    int i,j;
    int x;
    scanf("%d",&s);
    for(i=0;i<s;i++)
    {
        scanf("%d",&ar[i]);
    }
    x=ar[s-1];
    for(i=s-2;i>=0;i--)
    {
        if(x>=ar[i])
        {
            ar[i+1]=x;
            for(j=0;j<s;j++)
                printf("%d ",ar[j]);
            printf("\n");
            return 0;
        }
        else{
            ar[i+1]=ar[i];
            for(j=0;j<s;j++)
                printf("%d ",ar[j]);
            printf("\n");
        }
    }
    ar[0]=x;
    for(j=0;j<s;j++)
        printf("%d ",ar[j]);
    return 0;
    }
