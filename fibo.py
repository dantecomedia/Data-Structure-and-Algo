n = int(input())

a=0
b=1

l=[]
l.append(0)
l.append(1)
for i in range(2,n+1):
	l.append(l[i-1]+l[i-2])



print(l[n])

