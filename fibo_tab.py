def fibo(n):
	l=[]
	l.append(0)
	l.append(1)

	for i in range(n+2):
		l.append(l[i-1]+l[i-2])

	return l[n+1]



if __name__=='__main__':
	a=int(input())
	print(fibo(a))