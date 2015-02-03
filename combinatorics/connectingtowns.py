#https://www.hackerrank.com/challenges/connecting-towns
#Authored by shashank21j on Oct 23 2013

paths=[[] for i in range(1000)]
T=input()
for i in range(0,T):
    N=input()
    paths[i]=[int(n) for n in raw_input().split()]
for i in range(0,T):
    res=1;
    for j in range(0,len(paths[i])):
        res=res*paths[i][j]
    print (res%1234567)
