def fib(n):

	l=[0,1]

	if n <=1:
		return n

	i=2
	while i< n+1 :
		l.append(0)
		i=i+1


	l[n-1]=fib(n-1)
	l[n-2]=fib(n-2)
	l[n]=l[n-1]+l[n-2]

	return l[n]

a=int(input())
print(fib(a))