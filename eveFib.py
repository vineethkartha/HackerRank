import math
Phi=(math.sqrt(5)+1)/2
Phi3=Phi**3
Phi_3=1/Phi3
k=11
print sum
T=int(raw_input())
N=range(0,T)
for t in range(0,T):
    N[t]=int(raw_input())

sum=(Phi3*(1-Phi3**k)/(1-Phi3) + Phi_3*(1-(-Phi_3)**k)/(1+Phi_3))/math.sqrt(5)
