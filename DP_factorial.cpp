//Dynamic Programming memoization method for factorial
#include<bits/stdc++.h>
using namespace std ;
int l[100];
int fibo(int n)
{
	if(n==0)
		l[n]=1;
	if(l[n]==-1)
		l[n]=n*fibo(n-1);
	return l[n];
}
 int main(int argc, char const *argv[])
 {
 	memset(l,-1,100*sizeof(l[0]));
 	int n;
 	cin>>n;
 	cout<<fibo(n);
 	return 0;
 }