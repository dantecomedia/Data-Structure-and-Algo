//LONGEST COMMON SUBSEQUENCE STRING 

#include<bits/stdc++.h>
using namespace std ;
#define MAX 100
int lookup[MAX][MAX];

string lcs (string X, string Y, int m , int n)
{
	
 if (m==0 || n==0)
 	return string("");
 if (X[m-1]==Y[n-1])
 	return lcs(X,Y,m-1,n-1)+X[m-1];
 

 if (lookup[m-1][n]>lookup[m][n-1])
 	return lcs(X,Y,m-1,n);
 else
 	return lcs(X,Y,m,n-1);


}
void lcslength(string X, string Y, int m, int n )
{
	for(int i=1;i<=m;i++)
	for(int j=1;j<=n;j++)
	{
		if (X[i-1]==Y[j-1])
			lookup[i][j]=1+lookup[i-1][j-1];
		else
			lookup[i][j]=max(lookup[i-1][j], lookup[i][j-1]);
	}
} 
int main(int argc, char const *argv[])
{
	string X,Y;
	cin>>X>>Y;
	int m=X.length();
	int n=Y.length();
	lcslength(X,Y,m,n);
	cout<<lcs(X,Y,m,n);

	return 0;
}