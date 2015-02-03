/*

Problem Statement

In Insertion Sort Part 1, you sorted one element into an array. Using the same approach repeatedly, can you sort an entire unsorted array?

Guideline: You already can place an element into a sorted array. How can you use that code to build up a sorted array, one element at a time? Note that in the first step, when you consider an element with just the first element - that is already "sorted" since there's nothing to its left that is smaller than it.

In this challenge, don't print every time you move an element. Instead, print the array every time an element is "inserted" into the array in (what is currently) its correct place. Since the array composed of just the first element is already "sorted", begin printing from the second element and on.

Input Format
There will be two lines of input:

    s - the size of the array
    ar - the list of numbers that makes up the array

Output Format
On each line, output the entire array at every iteration
*/
#include<stdio.h>

int main(){
    int s, a[1000];
    int i,j;
    int minNum,minPos;
    scanf("%d",&s);
    for(i=0;i<s;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<s;i++)
    {
        minNum=a[i];
        minPos=i;
        for(j=i;j>0;j--)
        {

            if(minNum<a[j-1])
            {
                a[j]=a[j-1];
                minPos=j-1;
            }
        }
        a[minPos]=minNum;
        for(j=0;j<s;j++)
        {
            printf("%d ",a[j]);
        }
        printf("\n");
    }
    return 0;
    }

