#include<bits/stdc++.h>
using namespace std;

int getPairsCount(int arr[], int n, int k) 
{
    int count=0;
    unordered_map<int, int> hashCount;

    for (int i = 0; i < n; ++i)
    	hashCount[arr[i]]++;
    for(auto val:hashCount){

    	count+=hashCount[k-val.first];
    	/*if (k-val.first==val.first)
    	{
    		count--;
    	}*/
    	cout<<val.first<<":"<<k-val.first<<endl;
    }
    // As counting happens for (1,5)  and (5,1) so divide by 2
    return count/2;
}

int main()
{
	#ifndef ONLINE_JUDGE
 	 freopen("input.txt","r",stdin);
 	 freopen("output.txt","w",stdout);
 	#endif
 	 int n,k;
 	 cin>>n;
 	 cin>>k;
 	 int arr[n];
 	 for (int i = 0; i < n; ++i)
 	 	cin>>arr[i];

 	 cout<<getPairsCount(arr,n,k);

	return 0;
}