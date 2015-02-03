/*
Problem Statement

Dothraki are planning an attack to usurp King Robert from his kingdom. King Robert learns of this conspiracy from Raven and plans to lock the single door through which an enemy can enter his kingdom.

door

But, to lock the door he needs a key that is an anagram of a certain palindrome string.

The king has a string composed of lowercase English letters. Help him figure out if any anagram of the string can be a palindrome or not.

Input Format
A single line which contains the input string

Constraints
1<=length of string <= 10^5
Each character of the string is a lowercase English letter.

Output Format
A single line which contains YES or NO in uppercase.
*/
#include<stdio.h>
#include<string.h>
int main()
{
  char string[100000];
  int count[26];
  int len,i;
  int flag=0;
  for(i=0;i<26;i++)
    count[i]=0;
  scanf("%s",string);
  len=strlen(string);
  for(i=0;i<len;i++)
    {
      count[string[i]-'a']++;
    }
  if(len%2==0)
    {
      flag=0;
      for(i=0;i<26;i++)
	{
	  if(count[i]!=0&&count[i]%2!=0)
	    {
	      printf("NO");
	      return 0;
	    }
	  flag=1;
	}
      if(flag==1)
	printf("YES");
    }
  else
    {
      flag=0;
      for(i=0;i<26;i++)
	{
	  if(count[i]!=0&&count[i]%2==0)
	    {
	      flag++;
	    }
	}
      if(flag%2!=0)
	printf("YES");
      else
	printf("NO");
    }
  return 0;
}
