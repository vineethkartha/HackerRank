T=int(input())
N=range(0,T)
for t in range(0,T):
    N[t]=int(input())
for t in range(0,T):
    for i in range((999*999),(100*100), -1):
        if str(i) == str(i)[::-1] and i<N[t]:
            print i
            break
