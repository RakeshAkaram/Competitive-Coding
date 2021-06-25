#include<bits/stdc++.h>
using namespace std;

long long findMinDiff(vector<long long> a, long long n, long long m)
{
	// Sort the vector
    sort(a.begin(),a.end());
    long long minChoco=LLONG_MAX;
    
    /* 'm' is Number of students whose chocolates need to be distributed.
    * To minimize the difference between the Max and Min chocolates the students possess.
    */ Here 'm' becomes the No of chocolates bags to skip, which mean we select "m" bags between 'i' and 'i+m' whose difference is minimum.
    for(int i=0;i+m-1<n;i++)
        minChoco=min(minChoco,a[i+m-1]-a[i]);
    return minChoco;
 }   

int main()
{
	long long n,m;
	cin>>n;
	cin>>m;
	std::vector<long long> v;
	for (int i = 0; i < n; ++i)
	{
		long long val;
		cin>>val;
		v.push_back(val);
	}

	cout<<findMinDiff(v,n,m);
	return 0;
}