//Recursive solution to coin change problem

#include<bits/stdc++.h>
using namespace std ;
int change(int s[], int m , int n)
{
	if (n==0)
		return 1;
	if (n<0)
		return 0;
	if(m<=0 && n>=1)
		return 0;
	return change(s,m-1,n)+ change(s,m,n-s[m-1]) ;
}


 int main(int argc, char const *argv[])
 {
 	/* code */
 	int i,j;
 	int arr[]={1,2,3};
 	cout<<change(arr,3,4);
 	return 0;
 }