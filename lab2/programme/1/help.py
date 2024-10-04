from math import *

res = 1
p = 0
n = int(input("Enter value: "))
i = 1
j = 1

for  i in range(1,n+1):
    while j<=i:
        p+=j+sin(j)
        j+=1
    res*=((i*i)+1)/p
    i+=1

print(res)