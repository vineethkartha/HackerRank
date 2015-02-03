/*

Problem Statement

Roy wanted to increase his typing speed for programming contests. So, his friend advised him to type the sentence "The quick brown fox jumps over the lazy dog" repeatedly because it is a pangram. ( pangrams are sentences constructed by using every letter of the alphabet at least once. )

After typing the sentence several times, Roy became bored with it. So he started to look for other pangrams.

Given a sentence s, tell Roy if it is a pangram or not.

Input Format

Input consists of a line containing s. 
*/
#include<stdio.h>

int main()
{
  char string[1000],b;
  int i=0;
  int map[26];
  for(i=0;i<26;i++)
    map[i]=0;
  i=0;
  scanf("%[^\n]s",string);
  while(string[i]!='\0')
    {
      b=tolower(string[i]);
      map[b-97]+=1;
      i++;
    }
  /*for(i=0;i<26;i++)
    {
      printf("%d\n",map[i]);
      }*/
  for(i=0;i<26;i++)
    if(map[i]==0)
      {
	printf("not pangram\n");
	return 0;
      }
  printf("pangram\n");
  return 0;
}
