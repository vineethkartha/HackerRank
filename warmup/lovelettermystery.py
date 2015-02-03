'''
Problem Statement

James found a love letter his friend Harry has written for his girlfriend. James is a prankster, so he decides to meddle with the letter. He changes all the words in the letter into palindromes.

To do this, he follows 2 rules:

(a) He can reduce the value of a letter, e.g. he can change 'd' to 'c', but he cannot change 'c' to 'd'.
(b) In order to form a palindrome, if he has to repeatedly reduce the value of a letter, he can do it until the letter becomes 'a'. Once a letter has been changed to 'a', it can no longer be changed.

Each reduction in the value of any letter is counted as a single operation. Find the minimum number of operations required to convert a given string into a palindrome.

Input Format
The first line contains an integer T, i.e., the number of test cases.
The next T lines will contain a string each. The strings do not contain any spaces.

Output Format
A single line containing the number of minimum operations corresponding to each test case.

Constraints
1 ≤ T ≤ 10
1 ≤ length of string ≤ 104
All characters are lower case English letters. 
'''

T=int(raw_input())
N=[]
for t in range(0,T):
    N.append(raw_input())

sum=0
for t in range(0,T):
#    print N[t][1]
    i=0
    j=len(N[t])-1
    while(i<len(N[t])/2):
        if(ord(N[t][i])!=ord(N[t][j])):
            if(ord(N[t][j])-ord(N[t][i])>0):
                sum=sum+ord(N[t][j])-ord(N[t][i])
            else:
                sum=sum+ord(N[t][i])-ord(N[t][j])

        i=i+1;
        j=j-1;
    print sum
    sum=0
