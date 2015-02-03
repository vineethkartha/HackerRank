# Program to print sum of multiples of 3 or 5
def sumFun(limit):
    return (limit*(limit+1)/2)

T=int(raw_input())
N=range(0,T)
for t in range(0,T):
    N[t]=int(raw_input())

for t in range(0,T):
    sum=0
    sum=3*sumFun((N[t]-1)/3)+5*sumFun((N[t]-1)/5)-15*sumFun((N[t]-1)/15)
    print sum
