
#include<bits/stdc++.h>
using namespace std;

template <class T>
void rotate(T arr[], int n)
{
    int temp=arr[n-1];
    for(int i=n-1;i>0;i--)
        arr[i]=arr[i-1];
    arr[0]=temp;
}

int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
 	 freopen("input.txt","r",stdin);
 	 freopen("output.txt","w",stdout);
 	#endif
 	 int n;
 	 cin>>n;
 	 int arr[n];
 	 for (int i = 0; i < n; ++i)
 	 	cin>>arr[i];

 	 rotate(arr,n);

 	 for (int i = 0; i < n; ++i)
 	 	cout<<arr[i]<<" ";

	return 0;
}