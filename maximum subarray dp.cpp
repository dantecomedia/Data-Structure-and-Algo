// DP SOLUTION FOR THE MAXIMUM SUBARRAY
#include<bits/stdc++.h>
using namespace std ; 
int max_sub(int arr[], int n)
{
    int max_so_far=arr[0];
    int curr=arr[0];
    for(int i=1;i<n;i++)
    {
        curr=max(arr[i],curr+a[i]);
        max_so_far=max(curr, max_so_far);
    }
    return max_so_far;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<max_sub(arr, n);
    return 0;
}