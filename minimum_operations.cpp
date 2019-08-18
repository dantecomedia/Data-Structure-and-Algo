/*Convert a number m to n with minimum operations. The operations allowed are :

    Multiply by 2, i.e., do m = 2 * m
    Subtract 1, i.e., do m = m – 1

*/
#include <bits/stdc++.h>
using namespace std ;
int min_operations(int m , int n)
{
	if(m<=0 && n>0)
		return -1;
	
	if (m>=n)
	{
		return (m-n);
	}
	else if (n%2==1)
		return 1+ min_operations(m,n+1);
	else if (n%2 ==0)
		return 1+min_operations(m,n/2);
}

int main(int argc, char const *argv[])
{
	/* code */
	cout<<min_operations(3,11);
	return 0;
}