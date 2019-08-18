#include<bits/stdc++.h>
using namespace std ; 
int lcs(char *x, char * y , int l , int m)
{
    int l[l+1][m+1];
    for(int i=0;i<=l;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if (i==0 || j==0)
            l[i][j]=0;
            else if( x[i]==y[j])
            l[i][j]=1+l[i-1][j-1];
            else
            l[i][j]=max(l[i-1][j], l[i][j-1]);
        }
    }
    return l[l][m];
}
int main()
{
    char x[100], y[100];
    cin>>x>>y;
    int l = strlen(x);
    int m= strlen(y);
    cout<<lcs(x,y, l, m);
    return 0;
}