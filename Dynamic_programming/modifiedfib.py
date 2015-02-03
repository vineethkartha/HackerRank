'''
A modified fibonacci series

https://www.hackerrank.com/challenges/fibonacci-modified
'''
ABN=[int(n) for n in raw_input().split()]
A=ABN[0]
B=ABN[1]
for i in range(2,ABN[2]):
    c=A+B**2
    #print A,B
    A=B
    B=c
print B
