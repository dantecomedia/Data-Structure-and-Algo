//Kadane's algorithm for finding the contigous maximum subarray
#include<bits/stdc++.h>
using namespace std ; 
int kadane(int arr[], int n)
{
    int max_so_far=0;
    int max_ending_here=0;
    for(int i=0;i<n;i++)
    {
        max_ending_here=max_ending_here+arr[i];
        if(max_ending_here<0)
        max_ending_here=0;
        if(max_ending_here>max_so_far)
        max_so_far=max_ending_here;
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
    cout<<kadane(arr,n);
    return 0;
}