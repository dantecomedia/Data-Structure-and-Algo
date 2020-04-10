def fibo_rec(n):
	if n == 0 :
		return 0
	if n==1 :
		return 1


	return fibo_rec(n-1)+ fibo_rec(n-2)

n =int (input())

print(fibo_rec(n))