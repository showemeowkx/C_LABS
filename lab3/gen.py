from random import randint

res=[]
for i in range(0, 7):
    new_row=[]
    i+=1
    for j in range(0, 7):
        new_row.append(randint(-10,10))
        j+=1
    res.append(new_row)

print(res)