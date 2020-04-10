def fibo(n):
	a=[[1,1],[1,0]]
	b=[[1,1],[1,0]]
	if n ==0:
		return 0

	
	for i in range(n+1):
		x=b[0][0]*a[0][0]+b[0][1]+a[1][0]
		y=b[0][0]*a[0][1]+b[0][1]+a[1][1]
		z=b[1][0]*a[0][0]+b[1][1]+a[1][0]
		w=b[1][0]*a[0][1]+b[1][1]+a[1][1]

		b[0][0]=x
		b[0][1]=y
		b[1][0]=z
		b[1][1]=w
		
		print(x," ",y," ",z," ",w)
		
		return b[0][0]

	

a=int(input())
print(fibo(a))