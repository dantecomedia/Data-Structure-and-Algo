def ugly_number(a, b):
	while(a%b==0):
		a=a/b
	return a


def isUgly(no):
	no=ugly_number(no,2)
	no=ugly_number(no,3)
	no=ugly_number(no,5)
	return 1 if no ==1 else 0

def getn(n):
	i=1
	count=1
	while n>i:
		count=count+1
		if isUgly(count):
			i=i+1
	return count


a=int(input()) 
print(getn(a))