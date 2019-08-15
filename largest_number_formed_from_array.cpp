#include<bits/stdc++.h>
using namespace std ; 
int compare(string X, string Y )
{
	string XY=X.append(Y);
	string YX=Y.append(X);
	return XY.compare(YX)>0? 1:0;
}
void printlargest(vector<string> arr)
{
	sort(arr.begin(),arr.end(), compare);
	for(int i=0;i<arr.size();i++)
		cout<<arr[i];
}

int main(int argc, char const *argv[])
{
	vector<string> arr;
	arr.push_back("54");
	arr.push_back("546");
	arr.push_back("548");
	arr.push_back("60");
	printlargest(arr);
	return 0;
}