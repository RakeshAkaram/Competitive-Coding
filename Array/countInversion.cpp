#include<bits/stdc++.h>
using namespace std;

long int bruteForce(long long arr[], long long N)
{
    // Your Code Here
	long long int count=0;
    for (int i = 0; i < N; ++i)
    	for (int j = i; j < N; ++j)
    		if(arr[i]>arr[j])
    			count++;
    			
    return count;
}

void merge(int arr[])
{

}

void dAndC(long long arr[])
{

}

 long int inversionCount(long long arr[], long long N)
{
    // Your Code Here
	long long int count=0;
    long long mid=N/2;



    return count;
}

int main()
{
	#ifndef ONLINE_JUDGE
 	 freopen("input.txt","r",stdin);
 	 freopen("output.txt","w",stdout);
 	#endif
 	 long long n;
 	 cin>>n;
 	 long long arr[n];
 	 for (long long i = 0; i < n; ++i)
 	 {
 	 	cin>>arr[i];
 	 }

 	 cout<<"Brute Force:"<<bruteForce(arr,n);
 	 cout<<inversionCount(arr,n);
 	
	return 0;
}