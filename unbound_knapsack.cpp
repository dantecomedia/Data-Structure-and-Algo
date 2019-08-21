#include<bits/stdc++.h>
using namespace std ; 
int unbounded_knapsack(int W, int n, int val[], int wt[])
{
	int dp[W+1];
	memset(dp,0 , sizeof(dp));
	int ans=0;
	for(int i=0;i<=W;i++)
		for(int j=0;j<n;j++)
		{	
			//cout<<"i "<<i<<" "<<"j "<<j<<" "<<"wt[j]:"<<wt[j]<<endl;
			if(wt[j]<=i)
			{

			//	cout<<"----------------"<<endl;
			/*	cout<<"i:"<<i<<" j:"<<j<<endl;
				cout<<"wt[j]:"<<wt[j]<<endl;
				cout<<"val[j]:"<<val[j]<<endl;
				cout<<"dp[i-wt[j]]+val[j]"<<dp[i-wt[j]]+val[j]<<endl;
				cout<<"dp[i]"<<dp[i]<<endl; */
				dp[i]=max(dp[i], dp[i-wt[j]]+val[j]);
				//cout<<"dp[i]"<<dp[i]<<endl;
				//cout<<"-----------------"<<endl;
			}
}
		//for(int i=0;i<=W;i++)
		//	cout<<dp[i]<<" ";
		cout<<endl;


return dp[W];
}

int main()
{
	int W=100;
	int val[]={10,30,20};
	int wt[]={5,10,15};
	int n= sizeof(val)/sizeof(val[0]);


	cout<<unbounded_knapsack(W,n,val,wt);
	return 0;
}