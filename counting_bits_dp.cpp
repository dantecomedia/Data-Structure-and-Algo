//counting the total bits for upto to the given number


#include<bits/stdc++.h>
using namespace std ;

void count(int n)
{
	int dp[n+1];
	dp[0]=0;
	for(int i=1;i<=n;i++)
		if (i&1)
			dp[i]=dp[i-1]+1;
		else
			dp[i]=dp[i>>1];

for(int i=0;i<n;i++)
	cout<<"number of bits in "<<i<<" "<<dp[i]<<endl;
}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	count(n);
	return 0;
}
